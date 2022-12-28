#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s;
        scanf("%d",&s);
        if(s<3)
        {
            printf("LIGHT
");
        }
        else if(s>=3 && s<7)
        {
            printf("MODERATE
");
        }
        else 
        {
            printf("HEAVY
");
        }
    }
}