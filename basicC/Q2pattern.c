/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 4
QUESTION 2*/
#include<stdio.h>//including header files
int main()
{
int n,row,col;//declaring and defining the variables 
printf("Enter number of rows\n");//inputing number of rows
scanf("%d",&n);

for(row=1;row<=n+1;row++)
{
	for(col=1;col<=n+1-row;col++)
	{
	 printf("  ");//printing space
	}
    for(col=1;col<=row;col++)
	{ 
	 printf("%d ",row-col);//printing 1st part of the pattern
     
	}
	for(col=1;col<=row-1;col++)
	{ 
	 printf("%d ",col);//printing 2nd part of the pattern
     
	}
	printf("\n");
}
return 0;
}
/*output:
Enter number of rows
5
          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4
5 4 3 2 1 0 1 2 3 4 5
*/
