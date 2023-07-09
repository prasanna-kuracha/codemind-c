#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        char n[100],s[100];
        scanf("%s",n);
        int j=0,i,m=1;
        for(i=strlen(n)-1;i>=0;i--)
        {
            s[j++]=n[i];
        }
        for(i=0;i<strlen(n);i++)
        {
            if(n[i]!=s[i])
            {
                m=0;
                printf("NO
");
                break;
            }
        }
        if(m==1)
        {
            printf("YES ");
            if(strlen(n)%2==0)
            {
                printf("EVEN
");
            }
            else
            {
                printf("ODD
");
            }
        }
    }
    
}