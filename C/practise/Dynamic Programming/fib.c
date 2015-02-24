#include<stdio.h>
#define MAX 100

int aux[MAX];
void initialize();
int fib(int n);

void main()
{
	int n,r;
	scanf("%d",&n);
	initialize();
	r = fib(n);
	printf("Fib : %d\n",r);
}

void initialize()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		aux[i]=-1;
	}
	printf("values initialized\n");
}

int fib(int n)
{
	if(aux[n]==-1)
	{
		if(n<=1)
		{	aux[n]=n;}
		else
		{
			aux[n] = fib(n-1)+fib(n-2);
		}
	}
	return aux[n];
}
