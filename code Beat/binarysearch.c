#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100],n,i,j,no,mid,beg,end,loc;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter Element in an array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you wan't to search : ");
	scanf("%d",&no);
	beg=0;
	end=n-1;
	mid = ((beg+end)/2);
	while(beg<=end && arr[mid]!=no)
	{
		if(no<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			beg = mid+1;
		}
		mid =((beg+end)/2);
	}
	if(arr[mid]==no)
	{
		loc=mid;
	}
	else
	{
		loc=NULL;
	}
	printf("\nfound at location: %d",loc);
	return 0;
}
