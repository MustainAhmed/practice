#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        for(j=1,k=i-1;j<=i-1,k>=1;j++,k--){
            printf("%c",k+64);
        }
    printf("\n");
    }
    return 0;
}
