#include<stdio.h>
int main(int argc, char *argv[])
{
	int c,i=0;
	if(argc!=2)
		printf("Usage: %s filename\n",argv[0]);
	else
	{
		FILE *file = fopen(argv[1],"r");
		if(file==0)
		{
			printf("Couldn't open File");
		}
		else
		{
			while((c = fgetc(file))!=EOF)
			{
				if(c == '\n')
					i++;
			}
			fclose(file);
			printf("%d",i);
		}
	}

	return 0;
}
