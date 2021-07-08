#include<stdio.h>
struct complex
{
	float real;
	float img;
};
complex add(complex no1,complex no2)
{ complex no3;

	no3.real=no1.real+no2.real;	
	no3.img=no1.img+no2.img;
	return no3;
}
int main()
{	
	complex no1,no2,no3;
	printf("Enter the real and img part of the first number\n");
	scanf("%f%f",&no1.real,&no1.img);
	fflush(stdin);
	printf("Enter the real and img part of the second number\n");
	scanf("%f%f",&no2.real,&no2.img);
	no3=add(no1,no2);
	printf("Addition=%f+%fi",no3.real,no3.img);
}

	
	
	

