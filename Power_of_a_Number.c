#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    int c=pow(n,m);
    int d=c%l;
    printf("%d",d);
}