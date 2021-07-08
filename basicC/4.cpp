#include<stdio.h>
int main()
{	float si,p,r,n;
	printf("Enter principal amount\n");
	scanf("%f",&p);
	printf("Enter rate\n");
	scanf("%f",&r);
	printf("Enter no. of years\n");
	scanf("%f",&n);
	si=p*r*n/100;
	printf("Simple Interest=%f",si);

	
}
