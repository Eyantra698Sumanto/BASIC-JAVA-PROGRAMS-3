#include<stdio.h>
int main()
{	float bs,da,hra,gs;
	printf("Enter basic salary\n");
	scanf("%f",&bs);
	printf("Enter DA\n");
	scanf("%f",&da);
	printf("Enter HRA\n");
	scanf("%f",&hra);
	gs=bs+0.5*da+0.4*hra;
	printf("Gross Salary=%f",gs);

	
}
