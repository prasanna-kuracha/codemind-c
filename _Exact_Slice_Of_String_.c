#include<stdio.h>
int main()
{
    char n[100];
    scanf("%[^
]s",n);
    int k,l,i;
    scanf("%d",&k);
    scanf("%d",&l);
    for(i=k;i<=l;i++)
    {
        printf("%c",n[i]);
    }
}