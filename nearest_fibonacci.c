#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1;
    while (b<n)
    {
        int c=a+b;
        a=b;
        b=c;
    }
    if (abs(n-a)==abs(n-b))
    {
        printf("%d %d",a,b);
    }
    else if(abs(n-a)<abs(n-b)){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
}