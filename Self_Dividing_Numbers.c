#include<stdio.h>
int fun(int n)
{
    int q=n,r;
    while (q!=0)
    {
        r=q%10;
        if (r==0)
        {
            return 0;
        }
        else if(n%r!=0){
            return 0;
        }
        q=q/10;
    }
    return 1;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if (fun(i)==1)
        {
            printf("%d ",i);
        }
    }    
}