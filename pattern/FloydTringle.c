#include<stdio.h>
int main()
{
    int row,col,n,count=1;
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d",count);
            count=count+1;
        }
        printf("\n");
    }
    return 0;
}
