#include<stdio.h>
int main()
{
	int arr[] = {1,2,4,6,8,9,23,45,67,89,90};
	int n,mid,beg,end,flag=0;
	scanf("%d",&n);
	beg=0;
	end=10;
	while(beg<=end)
	{
		mid = (beg+end)/2;
		if(arr[mid] == n){
			flag = 1;
			goto end;}
		if(n>arr[mid])
		{
			beg = mid+1;
		}
		if(n<arr[mid])
		{
			end = mid-1;
		}
	}
	end:
	if(flag == 0)
	{
		printf("not found\n");
	}
	else
		printf("found at %d",mid);
	return 0;
}
