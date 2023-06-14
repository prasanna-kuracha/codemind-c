#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],i;
    scanf("%s",n);
    for(i=0;i<strlen(n);i++)
    {
        if (n[i]=='6')
        {
            n[i]='9';
            break;
        }
    }
    printf("%s",n);
}