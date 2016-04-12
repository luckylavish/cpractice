#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,n,max,s_max;
	printf("Enter size of an array");
	scanf("%d",&n);
	arr = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr + i);
	}
	max = *arr;
	s_max = 0;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			s_max = max;
			max = arr[i];
		}
		else if(arr[i]>s_max)
		{
			s_max = arr[i];
		}
	}
	printf("MAX : %d\n",s_max);
	return 0;
}
