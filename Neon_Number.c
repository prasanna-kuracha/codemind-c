#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int k=n*n;
    while(k>0)
    {
        int r=k%10;
        s=s+r;
        k=k/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}