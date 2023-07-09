#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],s[100];
    scanf("%s",n);
    int j=0,i;
    for(i=0;i<strlen(n);i++)
    {
        if(j==0)
        {
            if(n[i]=='a'||n[i]=='e'||n[i]=='i'||
            n[i]=='o'||n[i]=='u')
            {
                s[j++]='V';
            }
            else
            {
                s[j++]='C';
            }
        }
        else if(n[i]=='a'||n[i]=='e'||n[i]=='i'||
        n[i]=='o'||n[i]=='u')
        {
            if(s[strlen(s)-1]!='V')
            {
                s[j++]='V';
            }
        }
        else{
            if(s[strlen(s)-1]!='C')
            {
                s[j++]='C';
            }
        }
    }
    printf("%s",s);
}