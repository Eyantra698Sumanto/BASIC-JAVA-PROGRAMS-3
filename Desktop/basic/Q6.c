/*PROGRAM TO PRINT PASCAL TRIANGLE*/
#include<stdio.h>				//including header files
long fact(int n)
{if(n==0)
return 1;
return (n*fact(n-1));

}
int main()					//main function
{
	int i,j,n,ncr;		//declaring and defining variables
	printf("\nEnter the no of lines\n");
	scanf("%d",&n);				//inputing no of lines from the user

	printf("THE PASCAL TRIANGLE IS:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		printf("  ");		//printing the pascal triangle
		for(j=0;j<=i;j++)
		{	
			printf("%3d ",fact(i)/(fact(i-j)*fact(j)));	
		}

	    printf("\n");
	}
	return 0;
}


