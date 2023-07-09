#include<stdio.h>
#include<string.h>
void sort(char *a)
{
    int i,j,t;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(a)-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("%s",a);
}
int main()
{
    char n1[100],n2[100];
    scanf("%s",n1);
    scanf(" %s",n2);
    strcat(n1,n2);
    sort(n1);
}