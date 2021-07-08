#include<stdio.h>
int main()
{	int i,j,n;char c='P';
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	     for(j=0;j<i;j++)
	     printf("%c",c+j); 

	     printf("\n");
	 }
	
}
