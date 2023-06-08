#include<stdio.h>
#include<string.h>
int main()
{
    char n[100],x;
    scanf("%[^
]s",n);
    int k,m,i;
    scanf("%d",&k);
    scanf("%d",&m);
    for(i=k;i<=m;i++)
    {
        printf("%c",n[i]);
    }
}