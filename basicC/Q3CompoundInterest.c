/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 2
QUESTION 3*/
#include<stdio.h>//including header files
#include<math.h>
int main()
{
float deposit,term,amt,interest,rate;//defining and declaring variables
printf("Enter the amount deposited and the number of years");
scanf("%f%f",&deposit,&term);//reading deposited amt and no. of years
if(deposit<1000 && term>=2)//condition 1
{       rate=0.05;
}
else if(deposit>=1000 && deposit<5000 && term>=2)//condition 2
{
	rate=0.07;
}
else if(deposit>5000 && term>=1)//condition 3
{
	rate=0.08;
}
else if( term>=5)//condition 4
{	rate=0.1;
}
else//condition 5
{	rate=0.03;
}
amt=deposit*pow((1+rate),term);//computing amount and compound interest
interest=amt-deposit;
printf("Money in the account=%f and the interest credited=%f",amt,interest);//printing the amount and the interest
return(0);
}
