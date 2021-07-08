#include<stdio.h>
#include<math.h>
double fx(double x,double y)
{
	double f=sqrt(x*y)+2;
	return f;
}
int main()
{  
	double h=10E-6,i,x0,y0,xn,yn,yn1,f,t=0;
	printf("Enter x0,y0\n");
	scanf("%lf%lf",&x0,&y0);
	yn=y0;i=x0;
	printf("Enter the value of xn\n");
	scanf("%lf",&xn);
	//if(xn>10&&fx(x0,y0)>10)
	//h=1;
	
	
	for(i=x0;i<xn-h;i+=h)
	{		yn1=yn+h*fx(i,yn);
		while(t!=yn1)
		{t=yn1;
		 yn1=yn+(h/2)*(fx(i,yn)+fx(i+h,yn1));
		}
		yn=yn1;
	}
	//if(xn>10&&fx(x0,y0)>10)
	//yn1++;
	printf("The solution is :%0.4lf",yn1);
	return 0;
}
	
