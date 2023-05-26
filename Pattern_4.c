#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j;
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("
");
    }
}