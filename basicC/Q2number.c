/*NAME-SUMANTO KAR
ROLL NO-8278
BATCH-B
FE ELEX
TUTORIAL 2
QUESTION 2*/
#include<stdio.h>//including header files
int main()
{int a,b=1000;// declaring variables a and b and initializing b to 1000
printf("THE SECOND NUMBER IS 1000 \nENTER THE FIRST NUMBER");
scanf("%d",&a);//reading first number
if(a==0)//checking the given conditions
{       a++;
	
}
else if(a==1)
{
	a--;
	b++;
}
else if(a==-100)
{
	a++;
	b--;
}
else
{
	a=0;
	b=0;
}
printf("THE NEW VALUE OF FIRST NUMBER IS %d AND OF SECOND NUMBER=%d",a,b);//printing the two numbers
return(0);
}
