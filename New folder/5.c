#include<stdio.h>
int main()
{
    int j,i=0,n,a[i],b[i];
    printf("Enter size of array=");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("New value to be added:");

    scanf("%d",&a[n]);
    int min;

    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){

            if(a[i]>a[j]){
                min=a[i];
                a[i]=a[j];
                a[j]=min;
            }

        }
    }


    for(i=0;i<=n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
