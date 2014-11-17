#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,n,*arr = (int*)malloc(sizeof(int));
	scanf("%d",&n);
	while(n>0)
	{
		arr[i] = n%2;
		i++;
		n/=2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
