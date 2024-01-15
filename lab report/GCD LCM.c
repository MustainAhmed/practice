#include<stdio.h>
int main()
{
    int a,b,l,s,gcd,c,lcm;
    printf("Enter two numbers=");
    scanf("%d \t%d",&a,&b);
    if(a>b){
        l=a;
        s=b;
    }
    else{
        l=b;
        s=a;}

    for(c=1;c<=s;c++){
        if(s%c==0&&l%c==0){
            gcd=c;
        }
    }
    lcm=l*s/gcd;
    printf("GCD=%d\n",gcd);
    printf("LCM=%d",lcm);
    return 0;
}
