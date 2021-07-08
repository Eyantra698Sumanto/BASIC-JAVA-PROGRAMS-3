/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 4
QUESTION 1*/
#include<stdio.h>//including header files
int main()
{	int row,col,n;//declaring and defining the variables
	printf("enter number of rows\n");//inputing number of rows
	scanf("%d",&n);
	for(row=1;row<=n;row++)//printing first row
		printf("%c",(char)(row+64));
	for(row=n-1;row>=1;row--)
		printf("%c",(char)(row+64));
	printf("\n");

	for(row=n-1;row>=1;row--)
	{
		for(col=1;col<=row;col++)//printing fist part
		printf("%c",(char)(col+64));
		for(col=1;col<=2*(n-row)-1;col++)//printing space
		printf(" ");
		for(col=row;col>=1;col--)// printing second part
		printf("%c",(char)(col+64));
	printf("\n");
	}
return 0;
}
/*output:
enter number of rows
5
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
*/

