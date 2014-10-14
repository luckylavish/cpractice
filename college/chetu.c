#include<stdio.h>
void rose(int x)
{
	x--;
	if(x!=0)
	{
		if(x%2==0)
		{
			printf("NISHU 2")
		}
		else
			rose(x);
		}
	else
	{
		printf("CHETU 1")
	}
}
int main()
{
	int t,a[31],i,count=0,rose;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i])
	}
	for(i=0;i<t;i++)
	{
		rose = 32-a[i];
		count(rose);
	}
}