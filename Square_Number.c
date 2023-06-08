#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i*i)+(j*j)==n)
            {
                c++;
                break;
            }
        }
    }
    if(c>0) printf("True");
    else{
        printf("False");
    }
}