// Program to calculate sum of all the element present above and below the diagnol
#include<stdio.h>
#define ROWMAX 5
#define COLOMNMAX 5
int main()
{
	int arr[ROWMAX][COLOMNMAX], i,j,sumA, sumB;
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLOMNMAX;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<(ROWMAX-1);i++)
	{
		for(j=1;j<COLOMNMAX;j++)
		{
			if(i<j)
			{
				sumA += arr[i][j];
			}
		}
	}
	for(i=1;i<ROWMAX;i++)
	{
		for(j=0;j<(COLOMNMAX-1);j++)
		{
			if(i>j)
			{
				sumB += arr[i][j];
			}
		}
	}
	printf("\nSum of Upper diagnols is %d\n",sumA);
	printf("\nSum of Lower diagnols is %d\n",sumB);
	return 0;
}
