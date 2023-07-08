#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%[^
]s",n);
    int i;
    for(i=strlen(n)-1;i>=0;i--)
    {
        printf("%c",n[i]);
    }
}