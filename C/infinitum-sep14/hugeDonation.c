#include<stdio.h>
void calculate(int y)
{
	char a='f';
	long long int i,j,sum=1;
	for(i=1,j=1;sum<=y;i++,j=i*i,sum+=j)
	{
		if(sum==y)
		{
			printf("%lld\n",i);
			a='t';
		}

	}	
	if(a=='f')
	{
		i--;
		printf("%lld",i);
	}
}
int main()
{
	int t;
	long long int x[10000],i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&x[i]);
	}
	for(i=0;i<t;i++)
	{
		calculate(x[i]);
	}
	return 0;
}
