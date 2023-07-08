#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    char d;
    scanf("%s",n);
    int i,j,m1=0,m2=0,c;
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=0;j<strlen(n);j++)
        {
            if(n[i]==n[j]) c++;
        }
        if(c>m1)
        {
            m1=c;
        }
    }
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=0;j<strlen(n);j++)
        {
            if(n[i]==n[j]) c++;
        }
        if(c>m2 && c<m1)
        {
            m2=c;
            d=n[i];
        }
    }
    if (m2==0) printf("-1");
    else printf("%c
",d);
}