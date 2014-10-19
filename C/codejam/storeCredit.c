#include<stdio.h>
int main()
{
	int n,c,i, *arr,a,t=0,z;
	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%d%d",&c,&i);
		arr = (int *)malloc(i*sizeof(int));
		for(t=0;t<i;t++)
			scanf("%d",&arr[t]);
		for(z=0;z<i;z++)
		{
			for(t=z+1;t<i;t++)
			{
				if((arr[t])+(arr[z])==c)
					goto end;
			}
		}
		end:
		printf("Case #%d: %d %d\n",a+2,z+1,t+1);
	}
	return 0;
}
