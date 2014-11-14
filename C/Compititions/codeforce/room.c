#include<stdio.h>
int main()
{
	int n,p,q,i,count=0,buff;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&p,&q);
		
		if(p + 2 <= q)
			y++;
		else
			buff = 0;
	}
	printf("%d\n", y+buff);
	
	return 0;
}
