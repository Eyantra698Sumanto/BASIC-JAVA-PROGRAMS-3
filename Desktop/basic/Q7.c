/*PROGRAM TO CHECK GIVEN MATRIX IS SYMMETRIC OR NOT*/
#include<stdio.h>						//including header files
#define SIZE 100						//defining size of array as 100
int main()							//main function
{
	int a[SIZE][SIZE],t,i,j,n,flag=1;			//declaring and defining variables and initializing flag to 1
	printf("\nEnter the order  of the matrix\n");
	scanf("%d",&n);	 					//inputing order of matrix	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{printf("\na[%d][%d]=",i,j);	
		scanf("%d",&a[i][j]);				//inputing the matrix
		}						
	}	
	printf("\nThe given matrix  is:\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);				//printing the given matrix
	    printf("\n");
	}							
	for(i=0;i<n;i++)					//loop for row 
		for(j=0;j<n;j++)				//loop for column 
		if(i!=j)
		 	if(a[i][j]!=a[j][i])				//checking the condition for being symmetric
		  	{
		  		flag=0;
		  		goto out;
			}
		 					
	out:
	if(flag==1)
	printf("\nTHE  GIVEN MATRIX IS SYMMETRIC %d%d\n",i,j);		//printing matrix is symmetric or not
	else 
	printf("\nTHE  GIVEN MATRIX IS ASYMMETRIC\n");
	
	return 0;
}

