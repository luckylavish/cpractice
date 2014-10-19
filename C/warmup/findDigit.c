#include<stdio.h>
int number(long long int x)
{
	int i,count=0,temp;
	temp = x%10;
	if(x%temp==0)
		return temp;
	x/=10;
	if(x>0)
		number(x);

}
int main()
{
	int t,i,value;
	long long int n[1000000];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&n[i]);
	}
	for(i=1;i<=t;i++)
	{
		value=number(n[i]);
		printf(" %d\n",value);
	}
	return 0;
}
