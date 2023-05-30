#include<stdio.h>
int fun(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
    }
    if(s<=9) return s;
    else
    {
        fun(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=fun(n);
    if(x==1 ) printf("True
");
    else printf("False
");
}