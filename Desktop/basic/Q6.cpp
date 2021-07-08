/*PROGRAM TO PRINT PASCAL TRIANGLE*/
#include<stdio.h>				//including header files
#define SIZE 100
long fact(int n)
{if(n==0)
return 1;
return (n*fact(n-1));

}
int main()					//main function
{
	int  a[SIZE][SIZE],i,j,n,ncr;		//declaring and defining variables
	printf("\nEnter the no of lines\n");
	scanf("%d",&n);				//inputing no of lines from the user

	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)		//loop for column 
		{
		if(j==0||i==j)
		  a[i][j]=1;			//assigning diagonal and 1st column  elements to 1
		else
		  a[i][j]=a[i-1][j]+a[i-1][j-1];//computing other elements
		}
	}
	printf("THE PASCAL TRIANGLE IS:\n");
	for(i=0;i<=n;i++)
	{	
		for(j=0;j<=n-i;j++)
		printf("  ");
		for(j=0;j<i;j++)
		printf("%3d ",a[i][j]);		//printing the pascal triangle
	    printf("\n");
	}
	return 0;
}


