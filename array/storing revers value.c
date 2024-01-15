#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},i,j,temp;
    for(i=0,j=4;i<4;i++,j--){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
