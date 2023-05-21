#include<stdio.h>
void fun(int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(j*j==n)
		{
			printf("True
");
			return;
		}
	}
	printf("False
");
}
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		fun(n);
	}
}