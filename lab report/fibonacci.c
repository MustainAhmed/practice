#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,n,c;
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    for(c=1;c<=n-2;c++)
    {
        sum=a+b;
        a=b;b=sum;
    printf("%d,",sum);
    }

    return 0;
}
