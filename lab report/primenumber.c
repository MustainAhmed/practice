#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=2;a<=n;a++){
         if(n%a==0)
            {if(a==n)
                    printf("prime");
                else
                printf("not prime");
            break;}

    }
    return 0;
}


