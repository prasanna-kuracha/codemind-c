#include<stdio.h>
int main()
{
    float n,m,k;
    scanf("%f%f%f",&n,&m,&k);
    float s=n/k;
    if(s<=m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}