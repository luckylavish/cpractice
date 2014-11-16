#include<stdio.h>
int main()
{
	int i=0,n,arr[10];
	scanf("%d",&n);
	while(n>0)
	{
		arr[i++] = n%2;
		n/2;
	}
	i--;
	while(i!=0)
	{
		printf("%d\t",arr[i]);
		i--;
	}
	return 0;
}
