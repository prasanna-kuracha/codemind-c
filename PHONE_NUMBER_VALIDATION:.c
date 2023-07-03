#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char n[100];
    scanf("%s",n);
    if(n[0]!='0' && strlen(n)==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}