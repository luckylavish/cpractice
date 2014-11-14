#include<stdio.h>
#include<string.h>
int main()
{
	char strA[80]= "A string to be used for demonstration purpose";
	char strB[80] = "A string to be used for demonstation purpose only!";
	char *pA, *pB;
	puts(strA);
	pA = strA;
	puts(pA);
	pB = strB;
	putchar('\n');
	while(*pA!= '\0')
	{
		*pB++ = *pA++;
	}
	*pB ='\0';
	puts(strB);
	return 0;

}
