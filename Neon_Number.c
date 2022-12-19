#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    i=n*n;
    while(i>0)
    {
        s=s+(i%10);
        i=i/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }

}