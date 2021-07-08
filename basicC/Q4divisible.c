*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 3
QUESTION 4*/
#include<stdio.h>//including header files
int main()
{
int  sum=0,i;//defining and declaring variables
for(i=9;i<=300;i++)	 
{
	if(i%7==0 && i%63!=0)//hecking nos. that are divisible by 7 but not by 63
	{sum=sum+i;
	}
}
printf("Sum of integers between 9 and 300 that are divisible by 7 but not by 63 is %d",sum);//printing sum
return(0);
}

