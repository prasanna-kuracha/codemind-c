#include<stdio.h>
int main()
{
    int a,b,p,q;
    float c,d,r,s;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    p=a+b;
    q=a-b;
    r=c+d;
    s=c-d;
    printf("%d %d
",p,q);
    printf("%.1f %.1f
",r,s);
}