#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int c=0,p=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='z')
        {
            c++;
        }
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='o')
        {
            p++;
        }
    }
    if(2*c==p)
    {
        printf("Yes
");
    }
    else
    {
        printf("No
");
    }
}