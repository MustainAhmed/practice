#include<stdio.h>
int main()
{
    int row,col,r,c;
    printf("Enter number of row:");
    scanf("%d",&r);
    printf("\nEnter number of column:");
    scanf("%d",&c);
    for(row=1;row<=r;row++){
        for(col=1;col<=c;col++){
            if(row==1||row==r||col==1||col==c){
                printf("*");
            }
            else if(col!=1||col!=c){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
