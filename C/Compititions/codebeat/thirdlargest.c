#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*arr,i,max,smax,tmax;
	scanf("%d",&n);
	arr = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = smax = tmax = arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			tmax = smax;
			smax = max;
			max = arr[i];
		}
		else if(arr[i]>smax)
		{
			tmax = smax;
			smax = arr[i];
		}
		else if (arr[i] > tmax)
		{
			tmax = arr[i];
		}
	}
	printf("\n second Largest = %d\n third largest = %d\n",smax,tmax);
	return 0;
}
