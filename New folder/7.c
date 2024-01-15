#include<stdio.h>
int main()
{
    int n,i=0,a[i],max1,max2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=0;i<n;i++)
        {
            if(a[i]>max1){
                a[i]=max1;
            }
        }
        max2=a[0];
        for(i=0;i<n;i++){
            if(a[i]>max2&&a[i]<max1){
                max2=a[i];
            }
        }
        printf("Second Largest Number=%d",max2);

}
