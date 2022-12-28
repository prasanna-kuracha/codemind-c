#include<stdio.h>
int main()
{
    int n,p,m=0,a=0,q;
    scanf("%d",&n);
    p=n*n;
    while(n>0)
    {
        m=m*10+(n%10);
        n=n/10;
    }
    q=m*m;
    while(q>0)
    {
        a=a*10+(q%10);
        q=q/10;
    }
    if(p==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}