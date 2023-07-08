#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],f[100];
    scanf("%s",n);
    int i,x=0;
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='.')
        {
            f[x++]='[';
            f[x++]=n[i];
            f[x++]=']';
        }
        else
        {
            f[x++]=n[i];
        }
    }
    printf("%s",f);
}