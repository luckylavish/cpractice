#include<stdio.h>
int main()
{
	int i,j,n,k,l;
	printf("Enter the no. of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		for(k=1;k<=i;k++)
		{
			if(k!=1)	
				printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
