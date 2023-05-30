#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int s=n+m;
    for(i=1;i<=s;i++)
    {
        int k=s+i;
        if(fun(k)==1)
        {
            printf("%d",i);
            break;
        }
    }
}