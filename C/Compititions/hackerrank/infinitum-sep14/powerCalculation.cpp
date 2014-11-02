#include<iostream.h>
#include<math.h>
void power(long long k, long long n)
{
	long long int i,sum,j,p=1;
	int a,b;
	for(i=1;i<=k;i++)
	{
		
		sum = sum + pow(i,n);
	}
	if(sum>0){
		a = sum%10;
		sum = sum/10;
	}
	if(sum>0)
	{
		b=sum%10;
	}
	else
		b=0;
	cout<<b<<a;

}
int main()
{
	int t;
	long long k[10000],n[1000],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&k[i],&n[i]);
	}
	for(i=0;i<t;i++)
	{
		power(k[i],n[i]);
	}
	return 0;
}
