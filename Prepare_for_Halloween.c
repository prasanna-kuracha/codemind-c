#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int s=x*2;
        int c=y*5;
        if(s>c)
        {
            printf("Chocolate
");
        }
        else if(s==c)
        {
            printf("Either
");
        }
        else
        {
            printf("Candy
");
        }
    }
}