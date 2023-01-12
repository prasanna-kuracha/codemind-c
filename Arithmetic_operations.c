#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Sum:%d
",*p1+*p2);
    printf("Difference:%d
",*p1-*p2);
    printf("Product:%d
",*p1**p2);
    printf("Quotient:%d
",*p1/(*p2));
    printf("Remainder:%d
",*p1%*p2);
}