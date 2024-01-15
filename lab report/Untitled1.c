#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            printf("A");
        }
        for(col=3;col>=row;col--){
            printf("B");
        }
        for(col=2;col>=row;col--){
            printf("B");
        }
        for(col=1;col+1<=row;col++){
         printf("A");
        }
        printf("\n");
    }
    return 0;
}
