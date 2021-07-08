#include<stdio.h>
int main()
{	float a,l,b,p;
	printf("Enter length\n");
	scanf("%f",&b);
	printf("Enter breadth\n");
	scanf("%f",&l);
	a=l*b;
	p=2*(l+b);
	printf("Area=%f\nPerimeter=%f",a,p);

	
}
