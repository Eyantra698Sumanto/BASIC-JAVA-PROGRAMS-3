/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 4
QUESTION 3*/
#include<stdio.h>//including header files
int main()
{
int n,row,col,i,j=1;//declaring and defining the variables
printf("Enter number of rows\n");//inputing number of rows
scanf("%d",&n);

for(row=1;row<=n;row++)
{
	for(col=n;col>=row;col--)
	{ 
	 printf("%c",(char)(65+col-row));//printing the pattern
     
	}
	printf("\n");
}
return 0;
}
/*output:
Enter number of rows
5
EDCBA
DCBA
CBA
BA
A
*/
