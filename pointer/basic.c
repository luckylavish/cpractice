#include<stdio.h>
int main()
{
	int j,k;
	int *ptr;
	j=1;k=2;
	ptr=&k;
	printf("J has the value of %d and stored at %p\n",j, (void *)&j);
	printf("k has the value %d and is stored at %p\n",k, (void *)&k);
	printf("ptr has the value %p and is stored at %p\n",ptr,(void *)&ptr);
	return 0;
}
