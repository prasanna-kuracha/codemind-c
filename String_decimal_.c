#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        char s[100];
        scanf("%s",s);
        int x,i,c=1;
        for(i=0;i<strlen(s);i++)
        {
            x=s[i];
            if(x>=48 && x<=57)
            {
                continue;
            }
            else{
                c=0;
                break;
            }
        }
        if(c==1) printf("True
");
        else{
            printf("False
");
        }
        
    }
}