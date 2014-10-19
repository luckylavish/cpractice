#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n, arr[120],i,count=1,temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),cmpfunc);
	for(i=0;i<n;i++)
	{
	//		printf("%d\t",arr[i]);
		printf("count %d\n",count);
		if((arr[i]+1)==arr[i+1])
			count++;
		else{
		
			if(temp<=count)
				temp=count;
			count = 1;
		}
	
	}
	printf("\n\n%d\n",temp);
	return 0;
}
