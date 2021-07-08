#include<stdio.h>
#include<math.h>
double fx(double x)
{
	double f=exp(x);
	return f;
}

int main()
{  
	double h=10E-9,i,x,d;
	printf("Enter x\n");
	scanf("%lf",&x);
	d=(fx(x+h)-fx(x))/h;
	printf("derivative of f(x)=%lf",d);
	return 0;
}
	
