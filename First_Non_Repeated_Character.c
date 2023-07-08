#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        int f;
        scanf("%d",&f);
        char s[100];
        scanf("%s",s);
        int i,j,c,m=0;
        for(i=0;i<strlen(s);i++)
        {
            c=0;
            for(j=0;j<strlen(s);j++)
            {
                if(i!=j)
                {
                    if(s[i]==s[j])
                    {
                        c++;
                    }
                }
            }
            if (c==0)
            {
                m=1;
                printf("%c
",s[i]);
                break;
            }
        }
        if(m==0) printf("-1
");
    }
}