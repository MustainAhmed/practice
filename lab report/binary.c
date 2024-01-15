#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,a=1,b;
    scanf("%d",&n);
    for(c=1;a<=n;c=c+1){
        a=a*2;
        if(a>n){
            c=c-1;
            break;
        }
    }

    for(;c>=0;c--){
        if(pow(2,c)>n){
            printf("0");
        }
        if(pow(2,c)<=n){
            printf("1");
             b=pow(2,c);
    n=n-b;
        }
    }
    return 0;
}
