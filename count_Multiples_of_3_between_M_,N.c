#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    j=0;
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            j++;
        }
    }
    printf("%d",j);
}