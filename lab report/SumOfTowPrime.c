#include<stdio.h>
int main()
{
    int n,a,b,c;//does not show 'press any key to continue'            works for less than 12//
    char tem1='l',tem2='m';
    scanf("%d",&n);
    for(a=2;a<=n/2;a++)
    {
        b=n-a;
        for(c=2;c<=a;c++){
            if(a%c==0){
                if(c!=a){
                    break;
                }
                if(c==a){
                    tem1='p';
                }
            }
            for(c=2;c<=b;c++){
            if(b%c==0){
                if(c!=b){
                    break;
                }
                if(c==b){
                    tem2='p';
                }
            if(tem1==tem2){
                printf("%d=%d+%d\n",n,a,b);
            }
            }
        }
    }

}
return 0;
}
