#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s,c=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s=s+a[j];
            if(s==m)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}