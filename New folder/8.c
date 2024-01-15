#include<stdio.h>
int main()
{
    int n,i=0,a[i],min1,min2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min1=a[0];
    for(i=0;i<n;i++)
        {
            if(a[i]<min1){
               min2=min1;
                min1=a[i];
            }
            else if(a[i]<min2&&a[i]>min1){
                min2=a[i];
            }

        }

        printf("Second Smallest Number=%d",min2);
        return 0;
}
