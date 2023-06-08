#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>m1)
        {
            m1=a[i];
        }
    }
    int m2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<m1 && a[i]>m2)
        {
            m2=a[i];
        }
    }
    int m3=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<m1 && a[i]<m2 && a[i]>m3)
        {
            m3=a[i];
        }
    }
    if(m3==0)
    {
        printf("%d",m1);
    }
    else
    {
        printf("%d",m3);
    }
}