#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    char f[100];
    int i,c=-1;
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||
        n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||
        n[i]=='O'||n[i]=='U')
        {
            c++;
            f[c]=n[i];
        }
    }
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||
        n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||
        n[i]=='O'||n[i]=='U')
        {
            n[i]=f[c];
            c--;
        }
    }
    printf("%s",n);
}