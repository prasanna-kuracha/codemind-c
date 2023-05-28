#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           return 1;
        }
        
    }
     return 0;
}
int main()
{
    int n,i,c=2;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            int s=prime(i);
            if(s==1) 
            {
                c++;
            }
        }
    }
    printf("%d",c);
}