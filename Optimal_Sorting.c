#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        int h,i,j,k;
        scanf("%d",&h);
        int a[h];
        for(i=0;i<h;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<h-1;i++)
        {
            if(a[i]>a[i+1])
            {
                k=1;
                break;
            }
        }
        if(k==0) printf("0");
        else
        {
            int min=200,max=0;
            for(i=0;i<h;i++)
            {
                if (a[i]>max) max=a[i];
                if(a[i]<min) min=a[i];
            }
            printf("%d
",max-min);
        }
    }
}