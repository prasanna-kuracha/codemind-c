#include<stdio.h>
int main()
{
    int n,i,k,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(j=0;j<n;j++)
    {
        if(a[j]+k>=max)
        {
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
}