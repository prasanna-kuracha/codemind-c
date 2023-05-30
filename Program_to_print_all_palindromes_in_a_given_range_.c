#include<stdio.h>
int fun(int n)
{
    int s=0;
    while(n!=0)
    {
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        int x=fun(i);
        if(x==i) printf("%d ",x);
    }
}