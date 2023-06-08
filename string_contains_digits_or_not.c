#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        char s[100];
        scanf("%s",s);
        int x,c=0,i;
        for(i=1;i<=strlen(s);i++)
        {
            x=s[i];
            if(x>=48 && x<=57)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            printf("Yes
");
        }
        else{
            printf("No
");
        }
    }
}