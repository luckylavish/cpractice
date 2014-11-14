#include<stdio.h>
int main()
{
	int i,j,*arr,n,temp;
	printf("Enter the length of an array: ");
	scanf("%d",&n);
	arr = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	for(i=1;i<n;i++)
	{
		j=i-1;
		while(j>0 && arr[j]<arr[j-1])
		{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				j--;
		}
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	return 0;
}

