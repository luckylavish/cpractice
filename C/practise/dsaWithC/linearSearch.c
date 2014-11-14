#include<stdio.h>
int main()
{
	int loc=-1, i,n;
	int a[] = {1,2,3,4,5,6};
	printf("Enter the no. you want to find: ");
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{
		if(a[i]==n)
			loc=i;
	}
	if(loc==-1)
		printf("Not Found\n");
	else
		printf("Found at index %d\n",loc);
	return 0;
}
