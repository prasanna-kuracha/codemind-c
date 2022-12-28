#include<stdio.h>
int main()
{
    int n,a[n],s=0,i;
    scanf("%d",&a[n]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
           break;
        else
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}