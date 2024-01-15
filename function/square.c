#include<stdio.h>
int sqr(int a){
    return a*a;
    }



int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("\nSquare of %d is %d.\n",n,sqr(n));
    return 0;
}
