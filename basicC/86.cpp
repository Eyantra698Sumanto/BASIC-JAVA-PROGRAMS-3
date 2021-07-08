#include<stdio.h>
int main()
{	float marks;
printf("Enter the marks\n");
scanf("%f",&marks);
	if(marks>=70)
	printf("Distinction\n");
	else if(marks>=60)
	printf("First Class\n");
	else if(marks>=50)
	printf("Second Class\n");
	else if(marks>=40)
	printf("Pass\n");
	else
	printf("Fail\n");

}
