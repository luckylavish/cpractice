#include <stdio.h>
#include <stdlib.h>

int values[1000];

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n,x;
   scanf("%d",&x);
   for( n = 0 ; n < x; n++ ) {
      scanf("%d ",&values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }
  
  return(0);
}
