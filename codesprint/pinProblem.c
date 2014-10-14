#include<stdio.h>
#include<string.h>
int main()
{
	long long int t, n1[10000],m[10000][10],i,j;
	int t2,count=0;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld %d",&n1[i], &t2);
		for(j=1;j<=t2;j++)
			scanf("%lld",&m[i][j]);
	
	}
	for(i=1;i<=t;i++)
	{
		for(j=0;j<=m[i].length;j++)
		{
			printf("\nchecking for %lld and %lld", n1[i], m[i][j]);
			while(n1[i]!=0)
			{
				printf("\ncomparing %lld with %lld\n",n1[i],m[i][j]);
				if(n1[i] % m[i][j] == 0)
					count++;

				n1[i]--;
			}
		}
		printf("\n%d",count);
		count=0;
	}
}
