#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/3600;
    m=s-(h*3600);
    m=m/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}