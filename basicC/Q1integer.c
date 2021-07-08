/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 3
QUESTION 1*/
#include<stdio.h>//including header files
int main()
{
int n, sum=0,i=0,max=0,min=0;//defining and declaring variables
float avg;
printf("Enter a +ve integer:");//inputing an integer
scanf("%d",&n);
if(n>0)
{
	while(n>0)
	{i++;
	 sum=sum+n;
	 if(max<n);
	 max=n;
 	 if(min>n);
	 min=n;
	 printf("Enter next +ve integer:");//inputing next integers
	 scanf("%d",&n);
	}
	avg=sum/i;
}
else
{
 printf("No positive number entered\n");//printing if no +ve integer entered
 return 0;
}
printf("Number of +ve values entered is %d\n",i);//printing the specified output
printf("Maximum value entered is %d\n",max);
printf("Minimum value entered is %d\n",min);
printf("Average value is %f\n",avg);
return(0);
}

