#include<stdio.h>
int main()
{
    int n,d,m,a=1,b=2,c,sum=1;//shows 50/24 instead of 25/12//
    scanf("%d",&n);
    for(c=3;c<=n;c++){
        m=a*c+b;
        d=b*c;
        a=m;
        b=d;

    }
    a=a+b;
    printf("sum=%d/%d",a,b);
    return 0;
}

