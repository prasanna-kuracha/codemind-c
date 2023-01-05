#include<stdio.h>
int main()
{
    int n,s=0,p,i,q=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
        q=q+i;
    }
    p=q*q;
    printf("%d",p-s);
    
}