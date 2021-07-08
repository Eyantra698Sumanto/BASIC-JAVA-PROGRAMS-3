/* WAP to find norm of square matrix.
Norm is defined as square root of sum of 
squares of all elements in a matrix */

#include<stdio.h>
#include<math.h> //for sqrt function
#include<stdlib.h> //for exit function
#define MAX 10
int main()
{
	
	int arr[MAX][MAX],i,j;
        int rows,cols;

	printf("\n Enter no of rows and cols:= ");
	scanf("%d %d",&rows,&cols);

	if ( rows  != cols)
	{
		printf("\nIts not a square matrix\n");
		exit(0); //stop program execution
	}	

	printf("\n Enter the elements: ");


	for (i = 0 ; i < rows ; i++)
	{
		for ( j = 0 ; j < cols ; j++)
		{
			printf("\narr[%d][%d]:= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\n Entered Matrix is: \n");//to display data in matrix form

	for ( i = 0 ; i < rows ; i++)
	{
		for(j = 0 ; j < cols ; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n"); //to print a row on newline
	}

	float sum = 0;
	
	for(i = 0 ; i < rows ; i++)
	{
		for( j = 0; j < cols ; j++)
		{
			sum = sum+arr[i][j]*arr[i][j];
		}
	}

	printf("\nNorm of matrix is := %lf",sqrt(sum));

	return 0;
}
/* OUTPUT
 Enter no of rows and cols:= 3
2

Its not a square matrix
----------------------------
 Enter no of rows and cols:= 3  3

Enter the elements: 
arr[0,0]:= 1

arr[0,1]:= 2

arr[0,2]:= 3

arr[1,0]:= 4

arr[1,1]:= 5

arr[1,2]:= 6

arr[2,0]:= 7

arr[2,1]:= 8

arr[2,2]:= 9


 Entered Matrix is: 
1       2       3
4       5       6
7       8       9
Norm of matrix is := 16.8819
*/
