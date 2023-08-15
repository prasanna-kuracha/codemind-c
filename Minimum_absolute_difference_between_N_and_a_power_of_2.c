#include<stdio.h>
#include<math.h>
int main()
{
    int n,l;
    scanf("%d",&n);
    int max=0,min=0,i=0;
    while(i!=n){
        l=pow(2,i);
        if(l<=n)
        {
            min=l;
        }
        else
        {
            max=l;
            break;
        }
        i++;
    }
    if (n-min<max-n) printf("%d",n-min);
    else printf("%d",max-n);
}