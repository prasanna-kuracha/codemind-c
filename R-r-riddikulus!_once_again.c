#include<stdio.h>
int main()
{
    int n,m,i,j=0;
    scanf("%d%d",&n,&m);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++)
    {
        b[j++]=a[i];
    }
    for(i=0;i<m;i++)
    {
        b[j++]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}