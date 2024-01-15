#include<stdio.h>
int main()
{
    int a,c,sum=0,n,rem,tem,fact=1;
    scanf("%d",&n);
    tem=n;
    for(c=0;tem>=1;c++){
    rem=tem%10;
    tem=tem/10;
    for(a=rem;a>=1;a--){
        fact=fact*a;
        if(a==1){
            sum=sum+fact;
                fact=1;
        }
    }
    }
    if(sum==n){
        printf("strong number");
    }
    else
        printf("not strong number");
    printf("\n%d",sum);
    return 0;
}
