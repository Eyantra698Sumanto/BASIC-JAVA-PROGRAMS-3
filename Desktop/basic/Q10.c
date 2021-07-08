#include<stdio.h>
#define SIZE 100
void print_matrix(int a[][SIZE],int r,int c)
{
 	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d ",a[i][j]);
	printf("\n");
	}
}

void read_matrix(int a[][SIZE],int r,int c)
{
 	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{printf("Enter row %d and column %d ",i+1,j+1);
		 scanf("%d",&a[i][j]);
		}
	}
}
void add_matrix(int a[][SIZE],int b[][SIZE],int c[][SIZE],int r,int c1)
{
 	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c1;j++)
		c[i][j]=a[i][j]+b[i][j];
	}
}
int main()
{
	int r1,c1,r2,c2,a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE];
 	printf("Enter the order of first matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the order of second matrix\n");
	scanf("%d%d",&r2,&c2);
	if(r1!=r2 ||c1!=c2)
	{  printf("The order of matrices are not same\n");
	   return 0;
	}
	printf("Enter the elements of first matrix\n"); 
	read_matrix(a,r1,c1);
	printf("Enter the elements of second matrix\n"); 
	read_matrix(b,r2,c2);
	
	printf("The first matrix is:\n"); 
	print_matrix(a,r1,c1);
	printf("The second matrix is:\n"); 
	print_matrix(b,r2,c2);
	add_matrix(a,b,c,r1,c1);
	printf("The addition of two matrices are:\n"); 
	print_matrix(c,r1,c1);
}
 /*Output:
Enter the order of first matrix
3
3
Enter the order of second matrix
3
3
Enter the elements of first matrix
Enter row 1 and column 1 1
Enter row 1 and column 2 2
Enter row 1 and column 3 3
Enter row 2 and column 1 4
Enter row 2 and column 2 5
Enter row 2 and column 3 6
Enter row 3 and column 1 7
Enter row 3 and column 2 8
Enter row 3 and column 3 9
Enter the elements of second matrix
Enter row 1 and column 1 10
Enter row 1 and column 2 11
Enter row 1 and column 3 12
Enter row 2 and column 1 13
Enter row 2 and column 2 14
Enter row 2 and column 3 15
Enter row 3 and column 1 16
Enter row 3 and column 2 17
Enter row 3 and column 3 18
The first matrix is:
1 2 3 
4 5 6 
7 8 9 
The second matrix is:
10 11 12 
13 14 15 
16 17 18 
The addition of two matrices are:
11 13 15 
17 19 21 
23 25 27 
*/
