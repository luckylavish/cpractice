#include<stdio.h>
int main()
{
	int x,y,x1,y1,x2,y2,n,i,arr[5][6],t,min;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
		arr[i][1]=x;
		arr[i][2]=y;
		arr[i][3]=x1;
		arr[i][4]=y1;
		arr[i][5]=x2;
		arr[i][6]=y2;
	}
	for(i=1;i<=n;i++)
	{
		min = 9;
		
			if(abs(arr[i][1]-arr[i][3])<min)
			{
				min = abs(arr[i][1]-arr[i][3]);
				printf("min for x is %d\n",min);
			}
			if(abs(arr[i][2]-arr[i][4])<min)
			{
				min = abs(arr[i][2]-arr[i][4]);
				printf("min for y is %d\n",min);
			}
			if(abs(arr[i][1]-arr[i][5])<min)
			{
				min = abs(arr[i][1]-arr[i][5]);
				printf("min for x is %d\n",min);
			}
			if(abs(arr[i][2]-arr[i][6])<min)
			{
				min = abs(arr[i][2]-arr[i][6]);
				printf("min for y is %d\n",min);
			}
			
		printf("minimum value received %d\n",min);
	}

}
