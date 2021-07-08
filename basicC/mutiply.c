#include<stdio.h>
#define SIZE 100
int read(int a[][SIZE],int r,int c)
{	int i,j;
	 for(i=0;i<r;i++)
	 { for(j=0;j<c;j++)
	   {printf("\nA[%d][%d]=",i,j);
	    scanf("%d",&a[i][j]);
	    }
	 }
}
int display(int a[][SIZE],int r,int  c)
{	int i,j;
	 for(i=0;i<r;i++)
	 { for(j=0;j<c;j++)
	   printf("%4d ",a[i][j]);
	  printf("\n");
	 }
	
}	

int multiply(int a[][SIZE],int b[][SIZE],int c[][SIZE],int r1,int r2,int c2)
{	int i,j,k;
	 for(i=0;i<r1;i++)
	 {c[i][j]=0;
	   for(j=0;j<c2;j++)
	   { for(k=0;k<r2;k++)
	   	{
	    	c[i][j]+=a[i][k]*b[k][j];
	   	}
	   }
	}
}
int main()
{
	int r1,r2,c1,c2,a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],i,j;
	printf("Enter the row and column of first matrix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of second matrix\n");
	scanf("%d%d",&r2,&c2);
	 if(c1!=r2)
	{printf("Row 1 and column 2 are  not equal\n");
	return 0;
	}
	printf("Enter the elements of first matrix\n");
	read(a,r1,c1);
	printf("Enter the elements of second matrix\n");
	read(b,r2,c2);
	printf("The first matrix is:\n");
	display(a,r1,c1);
	printf("The second matrix is:\n");
	display(b,r2,c2);
	printf("Multiplication of the two matrices is:\n"); 
        multiply(a,b,c,r1,r2,c2);
	display(c,r1,c2);
}
/*
output:
./a.out
Enter the row and column of first matrix
2
3
Enter the row and column of second matrix
3
2
Enter the elements of first matrix

A[0][0]=1

A[0][1]=2

A[0][2]=3

A[1][0]=4

A[1][1]=5

A[1][2]=6
Enter the elements of second matrix

A[0][0]=7

A[0][1]=8

A[1][0]=9

A[1][1]=10

A[2][0]=11

A[2][1]=12
The first matrix is:
   1    2    3 
   4    5    6 
The second matrix is:
   7    8 
   9   10 
  11   12 
Multiplication of the two matrices is:
  58   64 
 139  154 
*/	
       
