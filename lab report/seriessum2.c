#include<stdio.h>
int main()
{
    int n,c,sum=0;
    scanf("%d",&n);
    for(c=1;2*c<=2*n;c++){
        sum=sum+2*c;
    }
    printf("%d",sum);
    return 0;
}

