#include<stdio.h>
int main()
{
    int k,fact=1,n,i,s=0,r;
    scanf("%d",&k);
    n=k;
    while(n!=0)
    {
        fact=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        s=s+fact;
        n=n/10;
    }
    if(s==k)
    {
        printf("The number %d is a strong number",k);
    }
    else
    {
        printf("The number %d is not a strong number",k);
    }
}