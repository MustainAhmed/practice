
#include<stdio.h>
int main()
{
    int d,j,i=0,a[i],n,c=0;
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
           {c++;
            break;}

        }
          if(d!=a[i])
        {

            d=a[i];
            continue;}
            else
                break;

    }
    printf("Number of duplicate elements=%d",c);
    return 0;
}
