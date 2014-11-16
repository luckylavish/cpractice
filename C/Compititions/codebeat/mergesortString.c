#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s1,*s2,*s3,i,j,k;
	i = j = k = 0;
	s1=(char *)malloc(sizeof(char));
	s2=(char *)malloc(sizeof(char));
	s3=(char *)malloc(sizeof(char));
	scanf("%s",s1);
	scanf("%s",s2);
	while(s1[i]!='\0' || s2[j]!='\0')
	{
		if(s1[i]>s2[j])
		{
			s3[k++] = s2[j++];
		}
		else
		{
			s3[k++] = s1[i++];
		}
	}
	while(s2[j]!=0)
	{
		s3[k++] = s2[j++];
	}while(s1[i]!=0)
	{
		s3[k++] = s2[i++];
	}
	return 0;
}
