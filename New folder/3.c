
#include<stdio.h>
int main()
{
    int d,j,i=0,a[i],n,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The unique elements found in array are:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c=c+1;
        }

        if(c==1)
        {
            printf("%d  ",a[i]);

    }
    else
        {
    c=1;}
}
return 0;
}
