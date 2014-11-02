#include<stdio.h>
int main()
{
        int i,max=0,temp=0;
        int a[] = {23,43,53,12,66,23,55,99,23,67,3};
        for(i=0;i<=10;i++)
        {
                if(a[i]>max)
                {
                        temp = max;
                        max = a[i];
                }
                else
                {
                        if(temp < a[i])
                                temp = a[i];
                }
        }
        printf("Second largest element is %d\n",temp);
}

