#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int i,j,max=0,c;
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=i;j<strlen(n);j++)
        {
            if(n[i]==n[j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if (c>max) max=c;
    }
    printf("%d",max);
}