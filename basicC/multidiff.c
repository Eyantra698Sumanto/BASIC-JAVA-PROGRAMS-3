#include<stdio.h>
#include<math.h>
double fx(double x)
{
	double f=x*x*x*x;
	return f;
}
double deri(double x,double n)
{
	double	h=10E-9,d;
	
	if(n>0)
	return(deri((fx(x+h)-fx(x))/h,n-1));
	else
	return (fx(x+h)-fx(x)/h);
}
int main()
{  
	double h=10E-9,i,x,d,n;
	printf("Enter x\n");
	scanf("%lf%lf",&x,&n);
	printf("derivative of f(x)=%lf",deri(x,n));
	return 0;
}
	
