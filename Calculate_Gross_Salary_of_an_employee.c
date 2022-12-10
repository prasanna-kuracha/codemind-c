#include<stdio.h>
int main()
{
    float hra,da,pf,bs,gf;
    scanf("%f%f%f",&bs,&da,&hra);
    pf=0.12*bs;
    gf=hra+pf+da+bs;
    printf("%.2f
%.2f",pf,gf);
    
    
}