#include<stdio.h>
#include<math.h>
 double cal( double x,double n)
{double f=pow(x,n)*exp(-x);

return f;
}
int main()
{

 register double d=0,n=55E7,x,x1,d1=0,a=10E3,b=0,sum=0,n1;
printf("Enter n\n");
scanf("%lf",&n1);
//a=a*M_PI/180;
//b=b*M_PI/180;
x=a/n;x1=b/n;
for(double i=1;i<=n;i=i+1)
{
d=x*(cal(x*i,n1-1))+d;//definite integration using sum formula
}
printf("Gamma(%lf)=%lf",n1,(d));


}

		

