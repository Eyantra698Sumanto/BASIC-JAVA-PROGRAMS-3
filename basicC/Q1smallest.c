/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 2
QUESTION 1*/
#include<stdio.h>//including header files
int main()
{int a,b,c,min;//defining and declaring variables
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);//reading three numbers
if(a==b && b==c)
{       printf("THE THREE NUMBERS ARE EQUAL=%d",a);
	return 0;
}
else if(a<b)
{
	if(a<c)
	   min=a;
	else
	   min=c;
}
else 
{
	if(b<c)
 	    min=b;
	else
	    min=c;
}

printf("THE SMALLEST OF THREE NUMBERS=%d",min);//printing the smallest number
return(0);
}
