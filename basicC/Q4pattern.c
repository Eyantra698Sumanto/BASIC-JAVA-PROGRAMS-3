/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 4
QUESTION 4*/
#include<stdio.h>//including header files
int main()
{
int n,row,col,i=1;//declaring and defining the variables and initializing i to 1
printf("Enter number of rows\n");//inputing number of rows
scanf("%d",&n);

for(row=1;row<=n+1;row++)
{
	for(col=1;col<=n+1-row;col++)
	{
	 printf("    ");//printing space
	}
    for(col=1;col<=2*row-1;col++)
	{ 
	 printf("%3d ",i*i);//printing square of i
	 i++;//incrementing i by 1
	}
	printf("\n");
}
return 0;
}
/*output:
Enter number of rows
4
                  1
              4   9  16
         25  36  49  64  81
    100 121 144 169 196 225 256
289 324 361 400 441 484 529 576 625
*/
