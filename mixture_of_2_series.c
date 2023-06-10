#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int odd=0;
    int even=0;
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",odd);
            odd=odd+2;
        }
        else
        {
            printf("%d ",even);
            even=even+1;
        }
    }
}