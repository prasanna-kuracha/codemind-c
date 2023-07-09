#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,e=0,o=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(j%2==0){
            e=e+a[j];
        }
        else{
            o=o+a[j];
        }
    }
    int k=abs(e-o);
    if(k%4==0){
        printf("X");
    }
    else
    {
        printf("Y");
    }
}