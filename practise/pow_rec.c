#include<stdio.h>
double
pow
(double a,
int
n) {
if(n == 0) return 1;
if(n == 1) return a;
double t =
pow
(a, n/2);
return t * t *
pow
(a, n%2);
}
int main()
{
	printf("%f",pow(7,5));
	return 0;
}
