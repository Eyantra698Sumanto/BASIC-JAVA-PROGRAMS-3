#include<stdio.h>
int main()
{	float f, c;
	printf("Enter temp. in Farenheit\n");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("The temp. in celsius=%f",c);
}
