#include<stdio.h>
int sum();
int main()
{
	int add, num;
	scanf("%d",&num);
	add = sum(num);
	printf("%d\n",add);
	return 0;
}
int sum(int n)
{
	if(n==0)
	
		return n;
	
	else
	
		return n + sum(n-1);
	
}
