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
    int n,s,c=0,y,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s=i;
            if(fun(s)==1)
            {
                y=n/s;
                if(fun(y)==1)
                {
                    c=1;
                    printf("%d %d",s,y);
                    break;
                }
            }
        }
    }
    if(c==0) printf("-1");
}