#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s;
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
    
}