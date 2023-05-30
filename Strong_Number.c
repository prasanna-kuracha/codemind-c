#include<stdio.h>
int fun(int r)
{
    int i,f=1;
    for(i=1;i<=r;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int k,i;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        int n;
        scanf("%d",&n);
        int r,x,s=0,p=n;
        while(p!=0)
        {
            r=p%10;
            x=fun(r);
            s=s+x;
            p=p/10;
        }
        if(s==n) printf("Strong
");
        else printf("Not Strong
");
    }
}