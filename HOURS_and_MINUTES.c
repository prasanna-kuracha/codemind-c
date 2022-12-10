#include<stdio.h>
int main()
{
    int h,m,a;
    scanf("%d",&a);
    h=a/60;
    m=a%60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}