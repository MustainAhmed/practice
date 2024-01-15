#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,d[10][10];
    printf("Enter value of row and column:\n");
    scanf("%d %d",&r,&c);
    printf("Enter value of matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[j][i]=a[i][j];
        }
    }

    printf("Transpose matrix:\n");
    for(j=0;j<c;j++){
        for(i=0;i<r;i++){
            printf("a[%d][%d]=%d\t",j+1,i+1,d[j][i]);
        }
        printf("\n");
    }


   return 0;
}
