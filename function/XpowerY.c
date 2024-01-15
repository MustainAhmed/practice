#include<stdio.h>
int power(int base,int power)
{
    int c,result=1;
    for(c=1;c<=power;c++){
        result=result*base;
    }
    return result;
}



int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d to the power %d is %d",x,y,power(x,y));
    return 0;
}
