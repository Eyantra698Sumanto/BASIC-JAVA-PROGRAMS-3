#include<stdio.h>
int main()
{	int i,f=1,n,s=0;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	  
		f=f*i;
		s=s+f;
	 }
	printf("Sum of the series=%d",s);
}
