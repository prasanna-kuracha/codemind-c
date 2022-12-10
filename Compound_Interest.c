#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float ci= p*pow((1+0.01*r),t)-p;
    printf("%.2f",ci);
}