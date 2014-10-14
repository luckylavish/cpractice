#include<stdio.h>
int main()
{
	int *p,i,j;
	int a[]={1,2,3,4,5,6,7,8};
	p=&a;
	for(i=0;i<8;i++)
	{
		printf("index is %d, address is %d, and value is %d\n",i,p,*p);
		p++;
	}
	j=allocbuf;
	printf("\n%d\n",j);
	return 0;
}
