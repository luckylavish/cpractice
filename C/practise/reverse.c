#include<stdio.h>
int main()
{
	int i,j; /* two integer for loop*/
	char s[100],temp; /* cahr s for scaning the string and temp for swaping*/
	gets(s); //scanning the string
	puts(s); //printing the scanned string
	for(i=0;s[i]!='\0';i++); //counting the length of string
	i--; //decreasing count by one because index starts with 0


	//swapping first chracter with last chracter.
	for(j=0;j<i;j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
	}
	puts(s);
	return 0;
}
