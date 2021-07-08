#include<stdio.h>
#include<math.h>
 double cal( double x,double n)
{double f=pow(x,n)*exp(-x);
return f;
}
double  gamma(double n1)
{
	 double d=0,n=10E7,x,x1,d1=0,a=100,b=0;
	 x=a/n;x1=b/n;
	for(double i=1;i<=n;i=i+1)
	d=x*(cal(x*i,n1-1))+d;//definite integration using sum formula	
	return d;		
}
int main()
{

 double n,m,ans;
printf("Enter n and m\n");
scanf("%lf%lf",&n,&m);
//a=a*M_PI/180;
//b=b*M_PI/180;
ans=gamma(n)*gamma(m)/gamma(m+n);

printf("Beta(%lf,%lf)=%lf",n,m,ans);

}

		

