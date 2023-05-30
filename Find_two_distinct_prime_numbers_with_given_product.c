#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,s,m,c=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            s=i;
            if(fun(s)==1)
            {
                m=n/s;
                if(fun(m)==1)
                {
                    c=1;
                    printf("%d %d",s,m);
                    break;
                }
            }
        }
    }
    if(c==0) printf("-1");
}