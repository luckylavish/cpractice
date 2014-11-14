#include<stdio.h>
int main()
{
	char *s;
	s = (char *)malloc(100*sizeof(char));
	scanf("%s",s);
	printf("You Entered: %c\n",s[2]);
	return 0;
}
