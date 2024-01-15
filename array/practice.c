//array//
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},b[10],i,j;
    for(i=0,j=9;i<10;i++,j--){
        b[j]=a[i];
    }
    for(i=0;i<10;i++){
        a[i]=b[i];
    }
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
    return 0;
}
