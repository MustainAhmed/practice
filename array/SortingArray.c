#include<stdio.h>
int main()
{
    int temp,min1,c=1,min,n,i=0,a[i],j=0,b[j];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("array[%d]=%d\n",i,a[i]);
    }
    return 0;
}

