#include<stdio.h>
int main()
{
    int n,c,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(c=1;c<=n;c++){
        sum=sum+c;
    }
    printf("\nSummation of the series is %d.(From 1 to %d)\n",sum,n);
    return 0;
}
