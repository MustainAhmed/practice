#include<stdio.h>
int main()
{
    int n,i=0,a[i],c=0;
    printf("Enter number of elements :");
    scanf("%d",&n);
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            c=c+1;
        }
    }
    printf("Number of odd element is %d",c);
    return 0;
}
