#include<stdio.h>
int main()
{	int i,j,n,p=0;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	 for(j=1;j<=n-i;j++)
	     printf(" ");
	     /*for(j=1;j<=2*i-1;j++)
	     if(j<=i)
	     printf("%d",i+j-1);
	     else
		 printf("%d",j-i+1);*/
		 for(j=1;j<=i;j++)
		 printf("%d",++p);
		  for(j=1;j<i;j++)
		printf("%d",--p);

	     printf("\n");
	 }
	
}
