#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    if(strlen(n)==10 && n[0]!='0')
    {
        printf("Valid
");
    }
    else
    {
        printf("Invalid");
    }
}