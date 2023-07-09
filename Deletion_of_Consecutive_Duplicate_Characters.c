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
        int j=0,i,c=0;
        for(i=0;i<strlen(n);i++)
        {
            if(j==0)
            {
                s[j++]=n[i];
            }
            else if(s[j-1]!=n[i])
            {
                s[j++]=n[i];
            }
            else{
                c++;
            }
        }
        printf("%d
",c);
    }
}