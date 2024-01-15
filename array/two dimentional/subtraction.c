
#include<stdio.h>
int main()
{
    int r,c,i,j,a[10][10],b[10][10],d[10][10];
    printf("Enter number of row & column:");
    scanf("%d %d",&r,&c);
    printf("Enter elements of 1st matrix:");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("a[%d][%d]=\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("1st matrix:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of 2nd matrix:");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("b[%d][%d]=\n",i,j);
            scanf("%d",&b[i][j]);
        }}
     printf("2nd matrix:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("addition matrix:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t",d[i][j]);

        }
        printf("\n");
    }



return 0;
}
