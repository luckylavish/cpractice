//WAP to calculate sum of digit of number in a single line

#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(;n!=0;sum=sum+(n%10),n=n/10);
	printf("%d",sum);
	return 0;
}
