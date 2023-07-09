#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int u=0,d=0,r=0,l=0,i;
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='U') u++;
        else if(n[i]=='D') d++;
        else if(n[i]=='R') r++;
        else if(n[i]=='L') l++;
    }
    if(u==d && r==l)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}