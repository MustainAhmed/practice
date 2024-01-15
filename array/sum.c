
#include<stdio.h>
int main()
{
    int n=0,a[n],i,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("\nEnter numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("\nThe summation of the elements is %d.\n",sum);
    return 0;
}
