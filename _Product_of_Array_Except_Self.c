#include<stdio.h>
int main()
{
    int n,p,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p=p*a[j];
            }
        }
        printf("%d ",p);
    }
}