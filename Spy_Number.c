#include<stdio.h>
int main()
{
    int n,s=0,i=1;
    scanf("%d",&n);
    while(n>0)
    {
      int r=n%10;
      s=s+r;
      n=n/10;
      i=i*r;
    }
    if(s==i)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}