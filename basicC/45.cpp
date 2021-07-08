#include<stdio.h>
int main()
{	int i,j,n;
printf("Enter the no of lines in the upper lines \n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	for(j=1;j<=n-i;j++)
	     printf(" ");
		for(j=1;j<=2*i-1;j++)
	     printf("*"); 
	     printf("\n");
	 }
	/*for(i=n-1;i>=1;i--)
	{	for(j=1;j<=n-i;j++)
	     printf("  ");
		for(j=1;j<=i;j++)
	     printf("* "); 
	     printf("\n");
	 }*/
	 	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
	     printf(" ");
		 for(j=1;j<=2*(n-i)-1;j++)
	     printf("*"); 
	     printf("\n");
	 }
	
}
