#include<stdio.h>
long int jumps(int x)
{
	int count=0,i;
	for(i=1;i<=x;)
	{
		int temp,j,z;
		count++;
		temp = count;
		j = i;
		z =1;
		for(z=1;z!=0;)
		{
			if(j==x){
				break;
			}
			temp--;
			j++;

			if(temp==0)
				z = 0;
		}
		j++;
		if(x == j)
		{
			count++;
		}
		i=j;
	}
	return count;
}
int main()
{
	int t,i;
	long int p[100],temp;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%ld",&p[i]);
	}
	for(i=1;i<=t;i++)
	{
		temp = jumps(p[i]);
		printf("%ld\n",temp);
	}
	return 0;
}
