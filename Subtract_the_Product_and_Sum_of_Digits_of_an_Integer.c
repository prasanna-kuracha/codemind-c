#include<stdio.h>
int main()
{
    int n,pro=1,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        pro=pro*r;
        n=n/10;
    }
    printf("%d",pro-s);
}