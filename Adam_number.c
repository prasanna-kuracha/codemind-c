#include<stdio.h>
int main()
{
    int n,s=0,r=0,p,q;
    scanf("%d",&n);
    p=n*n;
    while(n>0)
    {
        s=s*10+(n%10);
        n=n/10;
    }
    q=s*s;
    while(q>0)
    {
        r=r*10+(q%10);
        q=q/10;
    }
    if(p==r)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}