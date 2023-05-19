#include<stdio.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]>max)
      {
          max=a[i];
      }
    }
    //printf("%d",max);
    int min=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]<min)
      {
          min=a[i];
      }
    }
    //printf("%d",min);
    float k=(min+max)/2;
    printf("%.5f",k);
}