#include<stdio.h>
int main()
{	int i,n;
float x=0;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)	    
	     x+=(float)(2*i-1)/(2*i); 

	     printf("Sum of series=%f",x);
	 
	
}
