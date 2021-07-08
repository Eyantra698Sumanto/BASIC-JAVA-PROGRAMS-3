#include<stdio.h>
int main()
{	int i,j,n;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	     for(j=1;j<=i-1;j++)
	     printf(" "); 
		for(j=1;j<=n-i+1;j++)
	     printf("*"); 

	     printf("\n");
	 }
	
}
