#include<stdio.h>
void swap(int *p,int *q);
int main()
{
	int arr[5],i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;j=1;
	while(j!=4)
	{
		swap(&arr[i],&arr[j]);
		i++;j++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	
}
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p=*q;
	*q=temp;
}
