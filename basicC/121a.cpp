/*PROGRAM TO PRINT TRANSPOSE OF A MATRIX USING SAME ARRAY*/
#include<stdio.h>						//including header files
#define SIZE 100						//defining size of array as 100
int main()							//main function
{
	int a[SIZE][SIZE],t,i,j,m,n,k;				//declaring and defining variables
	printf("\nEnter the rows  of the matrix\n");
	scanf("%d",&n);						//inputing rows and columns of a matrix
	printf("\nEnter the columns  of the matrix\n");
	scanf("%d",&m);
	k=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{printf("\na[%d][%d]=",i,j);			//inputing the elements of the matrix
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
	for(i=0;i<n;i++)					//loop for row 
	{	if(n==m)
		k=i;
		for(j=0;j<k;j++)				//loop for column 
		{if(i!=j)
		 {t=a[i][j];
		 a[i][j]=a[j][i];				//getting the transpose of a matrix
		 a[j][i]=t;
		
		 }					
		}
	}
	printf("THE TRANSPOSE OF GIVEN MATRIX IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);				//printing the transpose of the matrix
	    printf("\n");
	}
	return 0;
}
/*OUTPUT:

Enter the rows  of the matrix
3

Enter the columns  of the matrix
3

a[0][0]=1

a[0][1]=2

a[0][2]=3

a[1][0]=4

a[1][1]=5

a[1][2]=6

a[2][0]=7

a[2][1]=8

a[2][2]=9

The given matrix is:
1 2 3
4 5 6
7 8 9
THE TRANSPOSE OF GIVEN MATRIX IS:
1 4 7
2 5 8
3 6 9

*/

