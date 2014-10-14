#include<stdio.h>
int main()
{
	int n,i,j;
	char str[1000][100],ch,flag,temp;
	scanf("%d",&n);
	j=0;
	for(i=1;i<=n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;str[i][j]!='\0';j++);
	
		for(;j>=2;j--)
		{
			if(str[i][j-2]<str[i][j-1])
			{
				flag = 'f';
				temp = str[i][j-1];
				str[i][j-1] = str[i][j-2];
				str[i][j-2] = temp;
				break;
			}
			else
				flag = 't';
		}
		if(flag == 't')
			printf("no answer\n");
		if(flag == 'f')
			printf("%s\n",str[i]);
	}
	return 0;
}
