//Program to calculate sum of diagnols of 2-D array
#include<stdio.h>
int main()
{
	int arr[5][5],i,j,sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
			if(i==j)
				sum += arr[i][j];
		}
	}
	printf("\n Diagnol sum : %d\n",sum);
	return 0;
}
