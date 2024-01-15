#include<stdio.h>
int main()
{
    int n,i=0,a[i],c=0,d=0,m;
    printf("Enter number of elements :");
    scanf("%d",&n);
     printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Element going to be searched=");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            c=c+1;
            d=i+1;
            printf("%d is found at position %d\n",m,d);
        }
    }

     if(c==0)
        printf("%d is not found",m);

    return 0;
}
