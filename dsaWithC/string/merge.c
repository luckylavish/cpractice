#include<stdio.h>
int main()
{
        int a[10],b[10],c[10],i,j,k;
        for(i=0;i<5;i++)
                scanf("%d",&a[i]);
        for(i=0;i<5;i++)
                scanf("%d",&b[i]);
        i=j=k=0;
        while(a[i]!='\0' && b[j]!='\0')
        {
		printf("value of a :%d\n",a[i]);
                if(a[i]<=b[i])
                {
                        c[k]=a[i];
                        i++;
                        k++;
                }
                if(a[i]>b[j])
                {
                        c[k]=b[j];
                        j++;
                        k++;
                }
        }

        while(b[j]!='\0')
        {
                c[k]=b[j];
                k++;j++;
        }
	while(a[i]!='\0')
	{
		c[k] = a[i];
		k++;i++;
	}

	return 0;
}
