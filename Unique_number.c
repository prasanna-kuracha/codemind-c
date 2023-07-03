#include<stdio.h>
#include<string.h>
int main()
{
    int c,k=0,i,j;
    char n[100];
    scanf("%s",n);
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=0;j<strlen(n);j++)
        {
            if(n[i]==n[j]) c++;
        }
        if(c!=1)
        {
            k=1;
            printf("Not Unique Number");
            break;
        }
    }
    if(k==0) printf("Unique Number");
}