#include<stdio.h>
int main()
{
	int t,i;
	long long int l[100000],r[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&l[i],&r[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("%lld%lld",l[i],r[i]);
	}
	return 0;
}
