#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int p=l*b;   //PARK area
    int ar=(l+2*w)*(b+2*w)-p; //total area-park area
    int q=c*ar;
    printf("%d",q);
}