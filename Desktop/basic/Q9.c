/* WAP to print trace of a matix
Trace is defined as sum of diagonal elements of matrix
*/

#include<stdio.h>
#include<math.h>
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
		exit(0);
	}	

	printf("\n Enter the elements: ");

	for (  i = 0 ; i < rows ; i++)
	{
		for (  j = 0 ; j < cols ; j++)
		{
			printf("\narr[%d][%d]:= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\n Entered Matrix is: \n");

	for (i = 0 ; i < rows ; i++)
	{
		for(  j = 0 ; j < cols ; j++)
		{
			printf("%d\t",arr[i][j]);;
		}
		printf("\n");
	}

	int sum = 0;

	for( i = 0 ; i < rows ; i++)
		sum = sum+arr[i][i];//sum of diagonal elements
	
	printf("\nTrace of matrix is := %d",sum);

	return 0;
}

/* OUTPUT
 Enter no of rows and cols:= 3 3

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
Trace of matrix is := 15
*/
