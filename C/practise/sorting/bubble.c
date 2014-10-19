#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = *x;
}
int main()
{
	int *ptri, *ptrj,i,j;
	int arr[]={45,34,2,3,67,23};
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				ptri = arr[i];
				ptrj = arr[j];
				swap(ptri,ptrj);
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
	
}
