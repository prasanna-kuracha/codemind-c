#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}