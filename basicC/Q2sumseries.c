/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 3
QUESTION 2*/
#include<stdio.h>//including header files
#include<math.h>
int main()
{ 
int n,sum=0, i=0;//defining and declaring variables
printf("Enter a +ve integer less than 10:");//inputing an integer
scanf("%d",&n);
while(n>10 || n<1)
{
	printf("\nInvalid input, enter again:");//inputing an integer for invalid input
	scanf("%d",&n);
}
for(i=1;i<=n;i++)
{
 sum=sum+(int)(pow(i,4);
}	

printf("\nSum of %d terms of the series is %d",n,sum);//printing the sum
return(0);
}
