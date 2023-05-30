#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("True
");
    }
    else
    {
        int a=0,b=1,c=a+b;
        while(c<n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(c==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}