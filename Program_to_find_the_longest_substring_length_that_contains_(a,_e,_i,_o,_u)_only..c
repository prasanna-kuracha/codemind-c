#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int i,j,m=0,c=0;
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=i;j<strlen(n);j++)
        {
            if(n[j]=='a' || n[j]=='e' || n[j]=='i' || n[j]=='o' ||n[j]=='u')
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c>m) m=c;
    }
    printf("%d",m);
}
