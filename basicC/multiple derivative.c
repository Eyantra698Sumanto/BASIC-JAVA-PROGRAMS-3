#include<stdio.h>
#include<math.h>
 long double fx(long double x)
{
	long double f=expl(x);
	return f;
}
double fact(double n)
{	double f=1,i;
	for( i=1;i<=n;i++)
	f=f*i;
	return f;
}
int main()
{  
	  double h=10E-6L,i,x=0L,d=0L, o,s=1,ncr;
	printf("Enter x\n");
	scanf("%Lf",&x);
	//x=x*3.14159265/180;
	/*if(h==2)
	h=10E-4;
	else if(h>=3)
	h=10;*/
	printf("Enter order\n");
	scanf("%Lf",&o);
	h=pow(10,-7+o);
	for(i=o;i>=0;i--)
	{	ncr=fact(o)/(fact(i)*fact(o-i));
		d=d+(ncr*fx(x+i*h)*s);
			printf("derivative of f(x)=%0.20f\n",d);
		s*=-1;
	}d=d/pow(h,o);
	printf("Higher  derivative of f(x) of order %.0Lf=%Lf",o,d);
	return 0;
}
	
