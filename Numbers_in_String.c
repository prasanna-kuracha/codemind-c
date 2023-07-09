#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    scanf("%[^
]s",n);
    int x,y,s=0,i;
    for(i=0;i<strlen(n);i++)
    {
        if(n[i]=='0'||n[i]=='1'||n[i]=='2'||n[i]=='3'||
        n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||
        n[i]=='8'||n[i]=='9')
        {
            x=n[i];
            y=x-48;
            s=s+y;
        }
    }
    printf("%d",s);
}