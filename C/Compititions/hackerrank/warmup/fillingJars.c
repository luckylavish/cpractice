/*Animesh has N empty candy jars, numbered from 1 to N, with infinite capacity. He performs M operations. Each operation is described by 3 integers, a, b, and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each jar whose index lies between a and b (both inclusive). Can you tell the average number of candies after M operations?

Input Format

The first line contains two integers, N and M, separated by a single space.
M lines follow; each of them contains three integers, a, b, and k, separated by spaces.

Constraints
3≤N≤107
1≤M≤105
1≤a≤b≤N
0≤k≤106

Output Format

A single line containing the average number of candies across N jars, rounded down to the nearest integer.

Note: Rounded down means finding the greatest integer which is less than or equal to the given number. E.g. 13.65 and 13.23 are rounded down to 13, while 12.98 is rounded down to 12.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int n,m,i,j,*a,*b,*k,sum=0,*arr;
    a = (long long int *)malloc(10000000*sizeof(long long int));
    b = (long long int *)malloc(10000000*sizeof(long long int));
    k = (long long int *)malloc(10000000*sizeof(long long int));
    arr = (long long int *)malloc(10000000*sizeof(long long int));
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++)
        arr[i]=0;
    for(i=1;i<=m;i++)
    {
        scanf("%lld%lld%lld",a,b,k);
        for(j=*a;j<=*b;j++)
        {
            arr[j]+=*k;
        }
    }
    for(i=1;i<=n;i++)
    {
        sum = sum + arr[i];
    }
    printf("%lld",sum/n);
return 0;
}

