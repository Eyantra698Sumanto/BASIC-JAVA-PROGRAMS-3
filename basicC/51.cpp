#include<stdio.h>
int main()
{	int i,j,n,k=65;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	k+=i;
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
	     printf("%c",k-j); 
	     printf("\n");
	 }
	
}
