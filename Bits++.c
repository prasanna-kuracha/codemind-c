#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char k[100];
        scanf("%s",k);
        if(k[0]=='+' && k[1]=='+') x++;
        else if(k[2]=='+' && k[1]=='+') x++;
        else if(k[0]=='-' && k[1]=='-') x--;
        else if(k[2]=='-' && k[1]=='-') x--;
    }
    printf("%d",x);
}