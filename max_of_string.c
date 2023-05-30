#include<stdio.h>
#include<string.h>
int main()
{
    int i,x,max=0;
    char n[100];
    scanf("%[^
]s",n);
    for(i=1;i<strlen(n);i++)
    {
        x=n[i];
        if(x>max)
        {
            max=x;
        }
    }
    printf("%c",max);
}