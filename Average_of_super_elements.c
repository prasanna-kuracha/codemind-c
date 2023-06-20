#include<stdio.h>
int main()
{
    int n,i,j,c,k=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
            s=s+a[i];
            k++;
            a[i]=0;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else{
        float r=(s*1.0)/(k*1.0);
        printf("%.2f",r);
    }
}