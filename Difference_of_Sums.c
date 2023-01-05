#include<stdio.h>
int main()
{
    int n,s=0,p,i,q=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    p=n*(n+1)/2;
    q=p*p;
    printf("%d",q-s);
    
}