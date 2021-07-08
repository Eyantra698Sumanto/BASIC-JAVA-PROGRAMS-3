#include<stdio.h>
#include<math.h>
double fx(double x,double y)
{
	double f=1/(x*x);
	return f;
}
int main()
{  
	double h=10E-8,i,x0,y0,xn,yn,f;
	printf("Enter x0,y0\n");
	scanf("%lf%lf",&x0,&y0);
	yn=y0;
	printf("Enter the value of xn\n");
	scanf("%lf",&xn);
	for(i=x0;i<xn;i+=h)
	{
		f=fx(i,yn);
		yn=yn+h*f;
		
	}
	printf("The solution is :%lf",yn);
	return 0;
}
	
