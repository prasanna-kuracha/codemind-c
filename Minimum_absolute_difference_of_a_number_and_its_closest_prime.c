#include<stdio.h>
#include<stdlib.h>
int fun(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,x,y,p,m;
    scanf("%d",&n);
    for(i=n;i<=2*n;i++)
    {
        if (fun(i)==1)
        {
            x=i;
            y=abs(n-x);
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if (fun(i)==1)
        {
            m=i;
            p=abs(n-m);
            break;
        }
    }
    if (y==p){
        printf("%d",y);
    }
    else if(y<p){
        printf("%d",y);
    }
    else{
        printf("%d",p);
    }
}