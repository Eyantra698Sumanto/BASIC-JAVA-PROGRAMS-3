#include<stdio.h>
int main()
{	int i,j,n;
printf("Enter the value of n\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=1;j<=i;j++)
		if(i%2)
		 printf("%d ",j); 		 
	     else
	      printf("%d ",i-j+1); 
	     printf("\n");
	 }
	
}
