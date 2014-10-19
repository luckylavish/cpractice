#include<stdio.h>
int main()
{
	int arr[10],i,j,temp;
	printf("Enter the 5 elements in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("sorted array is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
}
