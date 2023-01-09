#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k,fact=1,j;
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
        
    }
}