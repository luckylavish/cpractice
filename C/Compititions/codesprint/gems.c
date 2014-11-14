#include<stdio.h>
int main()
{
	int n,i,j,temp,k,l,m,count=1,c=0;
	char arr[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",arr[i]);
	}
	for(i=1;i<=1;i++)
	{
		for(j=0;arr[i][j]!='\0';j++);
		for(k=0;k<j;k++)
		{
			temp = arr[i][k];
			printf("\n comparing %c ",temp);	
			for(l=2;l<=n;l++)
			{
				for(m=0;m<j-1;m++)
				{
					printf("with %c\n",arr[l][m]);
					if(temp == arr[l][m])
					{
						count++;
						printf("\nmatch found\n");
						if(l != n)	
						{
						
							l++;m=-1;
						}
						else
						{
							m=j;
							continue;
						}
						
					}

				}
			}
			if(count == n)
			{
				c++;
			}
			count = 1;
		}
	}
	printf("%d",c);
	return 0;
}
