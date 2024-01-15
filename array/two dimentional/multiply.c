#include<stdio.h>
int main()
{
    int r,c,r1,c1,k,sum=0,i=0,j=0,a[10][10],b[10][10],d[10][10];
    printf("Enter number of row & column of 1st matrix:");
    scanf("%d %d",&r,&c);
    printf("Enter number of row & column second matrix:");
    scanf("%d %d",&r1,&c1);
    if(c!=r1)
        {
        printf("Not multipiable");
    return 0;
        }


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
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            printf("b[%d][%d]=\n",i,j);
            scanf("%d",&b[i][j]);
        }}
     printf("2nd matrix:\n");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c1;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<=r;i++){
        for(j=1;j<=c1;j++){
                for(k=1;k<=c;k++){
            d[i][j]=sum+a[i][k]*b[k][j];
        }
        sum=0;
    }}
    printf("multiplication matrix:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c1;j++){
            printf("%d\t",d[i][j]);

        }
        printf("\n");
    }



return 0;
}

