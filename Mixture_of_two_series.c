#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int odd_term=1;
    int even_term=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",even_term);
            even_term=even_term*2;
        }
        else
        {
            printf("%d ",odd_term);
            odd_term=odd_term*3;
        }
    }
}