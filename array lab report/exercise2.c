#include<stdio.h>
int main()
{
    int n=0,a[n],i,sum=0;
    printf("Enter number of students:");
    scanf("%d",&n);
    printf("\nEnter test mark:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    float avg;
    avg=(float)sum/n;
    printf("Average mark=%.2f",avg);
    return 0;
}

