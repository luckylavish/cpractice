#include<stdio.h>
#include<stdlib.h>
void reverse(int *a);
int main()
{
	int *a = (int *)malloc(sizeof(int));
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a);
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;

}
void reverse(int *a)
{
	int temp,i=0,j=4;
	while(i<j)
	{
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
}
