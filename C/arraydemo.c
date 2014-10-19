#include<stdio.h>
int main()
{
	int i,*p,arr[5]={1,2,3,4,5};
	p = &arr[0];
	for(i=0;i<5;i++)
	{
		printf("%d",*p);
		p++;
	}	
}
