#include<stdio.h>
#include<stdlib.h>
void toLower(char *s, int l);
char *removeSpace(char *s);
int main()
{
	char *s,*t;
	int l;
	s = (char *)malloc(sizeof(char));
	t = (char *)malloc(sizeof(char));
	scanf("%s",s);
	printf("\n%s\n",s);
	for(l=0;s[l]!='\0';l++);
	toLower(s,l);
	printf("\nto lower: %s\n",s);
	t = removeSpace(s);
	printf("final: %s\n",t);

	return 0;
}
void toLower(char *s,int l)
{
	int i;
	printf("\n received text is %s\n",s);
	for(i=0;i<l;i++)
	{
		if(s[i]<'a')
			s[i]+=32;
	}
}
char *removeSpace(char *s)
{
	char *t;
	s = "Lavish Aggarwal";
	t = (char *)malloc(sizeof(char));
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]!= ' ')
		{
			t[j]=s[i];
			printf("->%c",t[j]);
			t++,i++;
		}
		else
			i++;
	}
	printf("here it is%c\n",t[5]);
	return t;
}
