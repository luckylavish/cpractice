#include<stdio.h>
int main()
{
	
	long long int n,m,i,j,*a,*b,*k,sum=0,*arr;
	a = (long long int *)malloc(10000000*sizeof(long long int));
	b = (long long int *)malloc(10000000*sizeof(long long int));
	k = (long long int *)malloc(10000000*sizeof(long long int));
	arr = (long long int *)malloc(10000000*sizeof(long long int));
	scanf("%lld%lld",&n,&m);
	for(i=1;i<=m;i++)
	{
		scanf("%lld%lld%lld",&a[i],&b[i],&k[i]);
	}
	for(i=1;i<=n;i++)
		arr[i]=0;
	for(i=1;i<=m;i++)
	{
		for(j=a[i];j<=b[i];j++)
		{
			arr[j]+=k[i];
		}
	}
	for(i=1;i<=n;i++)
	{
		sum = sum + arr[i];
	}
	printf("%lld",sum/n);
	return 0;
}
