#include<stdio.h>
int main()
{
	int arr[]={67,43,23,46,66,22,65,1,35,8,3};
	int i,j;
	for(i=0;i<11;i++)
	{
		for(j=i+1;j<11;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i=0;i<11;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
