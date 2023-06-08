#include<stdio.h>
int fun(int *a,int m)
{
    int j;
    for(j=0;j<m-1;j++)
    {
        if(a[j]>a[j+1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        int m,i;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        if (fun(a,m)==1)
        {
            printf("0");
        }
        else{
            int max=0 ,min=100;
            for(i=0;i<m;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
                if(a[i]<min)
                {
                    min=a[i];
                }
            }
            printf("%d
",max-min);
        }
    }
    
    
}