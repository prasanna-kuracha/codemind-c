#include<stdio.h>
int prime(int n)
{
    if(n==1) return 0;
    else
    {
        int i;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0) return 0;
        }
        return 1;
    }
}
int main()
{
    int n,i,k;
    scanf("%d",&n);
    k=prime(n);
    if(k==1)
    {
        int r,c=0,cou=0,s;
        while(n!=0)
        {
            r=n%10;
            c++;
            if(prime(r)==1) cou++;
            n=n/10;
        }
        if(c==cou) printf("Mega Prime");
        else{
            printf("Not Mega Prime");
        }
    }
    else printf("Not Mega Prime");
}