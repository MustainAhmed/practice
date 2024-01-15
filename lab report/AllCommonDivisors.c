#include<stdio.h>
int main()
{
    int a,b,l,s,c;
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
            printf("%d\t",c);
        }
}
return 0;
}
