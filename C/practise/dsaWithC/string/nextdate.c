#include<stdio.h>
#include<stdlib.h>
void GenerateNextDate(char[]);
int main()
{
	char a[100];
	scanf("%s",a);
	printf("%s",a);
	GenerateNextDate(a);
	return 0;
}
void GenerateNextDate(char a[])
{
	if(a[1]>'0' && a[1]<'9')
	{
		a[1]++;
	}
	else
		a[0]++;
	printf("\n%s\n",a);
}
