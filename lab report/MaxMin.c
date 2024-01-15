#include<stdio.h>
int main()
{
    int n,i=0,a[i],max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {

        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Maximum=%d\n",max);
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Minimum=%d",min);
    return 0;
}
