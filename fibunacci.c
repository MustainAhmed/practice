#include<stdio.h>
int main(){
    int sum,a=0,b=1,count,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(count=3;count<=n;count++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return 0;
    }
