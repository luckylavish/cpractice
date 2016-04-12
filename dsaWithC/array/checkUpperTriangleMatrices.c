/*WAP to find whether a matrix is upper triangular or not*/
#include<stdio.h>
int main()
{
	int i,j,a[10][10],flag=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			if(i<=j)
			{
				if(a[i][j]==0)
				{
					flag = 1;
					goto con;
				}
			}
		}
	}
	con:
	if(flag==0)
		printf("Upper triangular matrix\n");
	else
		printf("It is not Upper triangular matrix\n");
	return 0;
	
}
