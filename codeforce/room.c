#include<stdio.h>
int main()
{
	int n,p[100],q[100],i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&p[i],&q[i]);
	}
	for(i=1;i<=n;i++)
	{
		if((q[i]-p[i])>=2)
			count++;
	}
	printf("%d\n",count);
}
