#include<stdio.h>
int main()
{
	float u,b,s;
	scanf("%f",&u);
	if(u<200)
	{
		b=u*1.20;
	}
	else if(u>=200 && u<=400)
	{
		b=u*1.50;
	}
	else if(u>=400 && u<=600)
	{
		b=u*1.80;
	}
	else 
	{
		b=u*2.00;
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