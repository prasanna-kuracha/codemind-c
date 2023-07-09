#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int i,j,c,s=0;
    for(i=0;i<strlen(n);i++)
    {
        c=0;
        for(j=0;j<strlen(n);j++)
        {
            if(n[i]==n[j])
            {
               c++; 
            }
        }
        if (c==1)
        {
            s=1;
            printf("%d",i);
            break;
        }
    }
    if(s==0) printf("-1");
}