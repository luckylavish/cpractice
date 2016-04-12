#include<stdio.h>
int main()
{
	int arr[]={1,23,4,6,7,8};
	int *ptr;
	int i;
	ptr = &arr;
	for(i=0;i<6;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
		printf("ptr + %d = %d\n",i, *(ptr+i));

//		printf("ptr + %d = %d\n",i, *(++ptr));

	}
	return 0;
}
