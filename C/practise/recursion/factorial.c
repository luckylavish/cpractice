#include<stdio.h>
int factorial(int n);
int main()
{
	int n,fac;
	scanf("%d",&n);	
	fac = factorial(n);
	printf("%d\n",fac);
	return 0;
}
int factorial(int n)
{
	if(n==1)
		return n;
	else
		return n*factorial(n-1);
}
