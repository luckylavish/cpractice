#include <stdio.h>
#include <stdlib.h>
int values[1000];
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n,x,i=0,count=0,temp;
   scanf("%d",&x);
   for( n = 0 ; n < x; n++ ) {
      scanf("%d",&values[n]);
   }

   qsort(values, x, sizeof(int), cmpfunc);
 while(values[x-1]!=0)
 {
 	temp=values[i];
	if(values[i]>0)
	{
		n=0;
		while(n<=(x-1))
		{
			if(values[n]>0)
			{
				values[n] = values[n]- temp;
				count++;
			}
			n++;
		}
		printf("%d\n",count);
		count=0;
	}
	else
		i++;
 }
  return(0);
}
