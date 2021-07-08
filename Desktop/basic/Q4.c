/*PROGRAM TO PRINT TRANSPOSE OF A MATRIX USING DIFFERENT ARRAY*/
#include<stdio.h>						//including header files
#define SIZE 100						//defining size of array as 100
int main()							//main function
{
	int a[SIZE][SIZE],b[SIZE][SIZE],i,j,m,n;		//declaring and defining variables
	printf("\nEnter the rows  of the matrix\n");		//inputing rows and columns of the matrix
	scanf("%d",&n);	
	printf("\nEnter the columns  of the matrix\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)					//loop for row 
	{
		for(j=0;j<m;j++)				//loop for column 
		{printf("\na[%d][%d]=",i,j);			//inputing the elements of a matrix
		scanf("%d",&a[i][j]);
		}			
	  
	}	
	printf("\nThe given matrix is:\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d ",a[i][j]);				//printing the given matrix
	    printf("\n");
	}							
	for(i=0;i<n;i++)					
	{
		for(j=0;j<m;j++)				
		{
		 b[j][i]=a[i][j];				//finding the transpose of the matrix
		}
	}
	printf("THE TRANSPOSE OF GIVEN MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",b[i][j]);				//printing the transpose the matrix
	    printf("\n");
	}
	return 0;
}
/*OUTPUT:

Enter the rows  of the matrix
2

Enter the columns  of the matrix
4

a[0][0]=1

a[0][1]=2

a[0][2]=3

a[0][3]=4

a[1][0]=5

a[1][1]=6

a[1][2]=7

a[1][3]=8

The given matrix is:
1 2 3 4 
5 6 7 8 
THE TRANSPOSE OF GIVEN MATRIX IS:
1 5 
2 6 
3 7 
4 8 
*/
