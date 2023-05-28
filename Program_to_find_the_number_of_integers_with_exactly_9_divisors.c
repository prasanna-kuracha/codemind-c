#include<stdio.h>
int div(int n)
{
    int i,c=2;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if (c==9) return 1;
    else return 0;
}
int main()
{
    int n,k=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s=div(i);
        if(s==1)
        {
            printf("%d ",i);
            k++;
        }
    }
    printf("
Total=%d",k);
}