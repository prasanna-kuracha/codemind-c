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
        int x,c=1,i;
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
        if(c==0) printf("False
");
        else{
            printf("True
");
        }
    }
}