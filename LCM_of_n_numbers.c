#include<stdio.h>
int main()
{
    int n,k=1,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        int c=0;
        for(i=0;i<n;i++)
        {
            if(k%a[i]==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",k);
            break;
        }
        else{
            k++;
        }
    }
}