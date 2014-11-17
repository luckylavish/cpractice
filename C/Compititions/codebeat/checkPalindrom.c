#include<stdio.h>
#include<stdlib.h>
#define TOPMAX 100
int TOP=0;
void pop(int *s);
void push(int *s, int n);
int main()
{
	int i=0,j=0, *stack = (int*)calloc(TOP,sizeof(int));
	char *s = (char*)malloc(sizeof(char));
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			char temp;
			if(s[i]>s[j])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}

		}
	}
	i=0;
	while(s[i]!='\0')
		printf("%c",s[i++]);
	printf("\n\n");
	i=0;
	while(s[i]!='\0')
	{
		if(TOP==0 || stack[TOP] != s[i])
		{
			printf("pushed %c\n",s[i]);
			push(stack,s[i]);
		}
		else
		{
			printf("pop\n");
			pop(stack);
		}
		i++;
	}
	if(TOP==0 || TOP == 1)
		printf("TRUE");
	else
		printf("FALSE");

	return 0;

}
void pop(int *s)
{
	if(TOP==-1)
		printf("UNDERFLOW");
	else
		TOP--;	
}
void push(int *s,int n)
{
	if(TOP == TOPMAX)
		printf("OVERFLOW");
	else
	{
		s[++TOP]=n;
	}
}
