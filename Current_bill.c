#include<stdio.h>
int main()
{
   int un;
   float b,s;
   scanf("%d",&un);
   if(un<200)
   {
      b=un*1.20;
   }
   else if(un>=200 && un<400)
   {
       b=un*1.50;
   }
   else if(un>=400 && un<600)
   {
       b=un*1.80;
   }
   else
   {
       b=un*2.00;
   }
   
   if(b>400)
   {
       s=b+(b*0.15);
   }
   else
   {
       s=b+100;
   }
   printf("%.2f",s);
}