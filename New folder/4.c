#include<stdio.h>
int main()
{
    int d,j,i=0,a[i],n,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c=c+1;
        }

        if(d!=a[i])
        {
            if(c==1){
                printf("%d occurs 1 time\n",a[i]);
            }
            else
            printf("%d occurs %d times\n",a[i],c);
            d=a[i];}
        c=1;
    }
    return 0;
}
