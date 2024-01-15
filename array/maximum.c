 #include<stdio.h>
 int main()
{
    int n=0,a[n],max,i;
    printf("Enter number  of elements:");
    scanf("%d",&n);
    printf("\nEnter numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];

    }
    printf("\nLargest number is %d\n",max);
    return 0;
}
