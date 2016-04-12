#include<stdio.h>
int main()
{
	int i=0,j=0;
	int a[] = {1,2,4,5,6,7,'\0'};
	int b[] = {1,2,3,4,5,3,'\0'};
	int c[100];
	while(a[i] != '\0')	
	{
		printf("%d",c[i]);
		i++;
	}
	while(b[j] != '\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	i=0;
	while(c[i]!='\0')
	{
		printf("%d",c[i]);
		i++;
	}
	return 0;
	
}
