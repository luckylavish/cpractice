#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[100],c;
	printf("Enter the string you wan't to reverse: ");
	scanf("%s",str);
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		c=str[i], str[i] = str[j], str[j] = c;
	}
	printf("\nReverse string is : %s\n",str);
}
