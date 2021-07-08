/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 3
QUESTION 3*/
#include<stdio.h>//including header files
int main()
{
int n, sum=0,i;//defining and declaring variables
printf("Enter a positive integer:");//inputing an integer
scanf("%d",&n);
for(i=1;i<n;i++)	 
{
	if(n%i==0)
	{sum=sum+i;
	}
}
if(sum==n)
printf("%d is a perfect number",n);//checking and printing the perfect no.
else
printf("%d is NOT a perfect number",n);
return(0);
}

