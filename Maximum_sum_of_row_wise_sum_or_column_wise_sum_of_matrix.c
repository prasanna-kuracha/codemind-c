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
    int s,max=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    int se,max1=0;
    for(j=0;j<m;j++)
    {
        se=0;
        for(i=0;i<n;i++)
        {
            se=se+a[i][j];
        }
        if(se>max1)
        {
            max1=se;
        }
    }
    if (max>max1)
    {
        printf("%d",max);
    }
    else{
        printf("%d",max1);
    }
    
}