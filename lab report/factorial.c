#include<stdio.h>
int main()
{
    int a,n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        fact=fact*a;
    }
    printf("\nFactorial of %d is %d.\n",n,fact);
    return 0;
}
