#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,rem,n,c,tem1,tem2,a;
    scanf("%d",&n);
    tem1=n;
    tem2=n;
    for(c=0;tem1>=1;c++){
        tem1=tem1/10;
    }
    for(a=1;a<=c;a++){
        rem=tem2%10;
        tem2=tem2-rem;
        tem2=tem2/10;
        sum=sum+pow(rem,c);
    }
    if(sum==n)
    printf("armstrong number");
    else
        printf("not armstrong number");
        printf("\n%d",sum);
    return 0;
}
