 #include<stdio.h>
 int main(){

   int i,j,s,temp,a[1000],count=0;
       scanf("%d",&s);

	   for(i=0;i<s;i++)
	         scanf("%d",&a[i]);

		   for(i=1;i<s;i++){
		         temp=a[i];
			       j=i-1;
			             while((temp<a[j])&&(j>=0)){
				           a[j+1]=a[j];
					             j=j-1;
						     count++;
						           }
							         a[j+1]=temp;
								   }

									printf("%d\n",count);
									       return 0;
									       }
