#include<stdio.h>
int main()
{	int i,j,n,k=65;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
	     printf("%c ",k++); 
	     printf("\n");
	 }
	
}
