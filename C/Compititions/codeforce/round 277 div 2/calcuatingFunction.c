/*A. Calculating Function
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.
Input

The single line contains the positive integer n (1 ≤ n ≤ 1015).
Output

Print f(n) in a single line.
*/

#include<stdio.h>
#include<stdlib.h>
long long int calculation(long long int n);
int main()
{
	long long int *n = (long long int *)malloc(sizeof(long long int));
	scanf("%lld",n);
	printf("%lld",calculation(*n));
	return 0;
}
long long int calculation(long long int n)
{	
	int j=1;
	long long int i,sum=0;
	if(n == 0)
		return 0;
	else
	{
		for(i= 1;i<=n;i++)
		{
			j = (j*-1);
			sum = sum + (j*i);
		}
	}
	return sum;
}

# This would be costly approach in order of running time.
#Instead a smple frmula for the arithmatic progression would be : If n%2==0: print T/2  else: ((T-1)/2)-T
