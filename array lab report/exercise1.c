#include<stdio.h>
int main()
{
    int n,i,c=0,d=0,a[c],b[d],j,temp;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(c=0;c<n;c++){
        scanf("%d",&a[c]);
    }
    for(c=0,d=n-1;c<n,d>=0;c++,d--){

        b[d]=a[c];
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    printf("\nThe elements in reverse order:\n");
    for(i=0;i<n;i++){
        printf("Element[%d]=%d\n",i,a[i]);

    }
    return 0;
}
