#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        int h,i,j,c=0;
        scanf("%d",&h);
        char f[100];
        scanf("%s",&f);
        for(i=0;i<h;i++)
        {
            if (f[i]=='1')
            {
                for(j=i;j<h;j++)
                {
                    if(f[i]==f[j])
                    {
                        c++;
                    }
                }
            }
        }
        printf("%d
",c);
    }
}