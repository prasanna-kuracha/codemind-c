#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int m,r=0,t;
		scanf("%d",&m);
		t=m;
		while(m>0)
		{
			r=r*10+m%10;
			m=m/10;
		}
		if(r==t)
		{
			printf("True
");
		}
		else
		{
			printf("False
");
		}
		
	}
}