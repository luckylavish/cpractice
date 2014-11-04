#include<stdio.h>
int main()
{
	int t, n,i,h,k=2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		h=1;
		while(k!=(n+2))
		{
			if(k%2==0)
				h*=2;
			else
				h+=1;

			k++;
		}
		printf("%d",h);
	}
	return 0;
}
