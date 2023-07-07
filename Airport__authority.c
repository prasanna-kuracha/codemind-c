#include<stdio.h>
int main()
{
    int n,i,j,c=0,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        int w;
        scanf("%d",&w);
        a[i]=w;
    }
    scanf("%d",&t);
    for(j=0;j<n;j++)
    {
        if(a[j]<=t)
        {
            c=c+1;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}