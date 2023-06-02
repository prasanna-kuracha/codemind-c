#include<stdio.h>
int main()
{
    int n,y;
    scanf("%d",&n);
    if (n%5==0 || n%10==0)
    {
       y=n/10;
       if(y*10==n)
       {
           printf("%d",y);
       }
       else{
           printf("%d",y+1);
       }
    }
    else{
        printf("-1");
    }
}