#include<stdio.h>
int main()
{
    int n,i=0,a[i];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
   printf("printing array\n");
    for(i=0;i<n;i++){

        if(a[i]==b){
            continue;
        }

        else {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
