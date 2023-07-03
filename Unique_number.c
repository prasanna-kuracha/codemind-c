#include<stdio.h>
#include<string.h>
int main()
{
    int c,d=0,i,j;
    char f[100];
    scanf("%s",f);
    for(i=0;i<strlen(f);i++)
    {
        c=0;
        for(j=0;j<strlen(f);j++)
        {
            if(f[i]==f[j])
            {
               c++;
            }
        }
            if(c!=1)
            {
                d=1;
                printf("Not Unique Number");
                break;
            }
    }   
    if(d==0) printf("Unique Number"); 
}