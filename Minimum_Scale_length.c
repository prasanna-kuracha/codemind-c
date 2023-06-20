#include<stdio.h>
int main()
{
    int n,min,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    j=1;
    while(j<n){
        if(a[j]%min==0)
        {
            j++;
        }
        else{
            min=a[j]%min;
        }
    }
    printf("%d",min);
}