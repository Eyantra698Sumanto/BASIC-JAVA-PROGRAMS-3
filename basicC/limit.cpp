#include<stdio.h>
#include<math.h>
 double cal( double x)
{double f=(x*x*x-1)/(x*x-1);  //pow((1-x),3)/(x-1);
return f;
}
int main()
{
double lim,n;
printf("Enter the limiting value\n");
scanf("%lf",&n);

printf("Limiting value of f(x) as x tends to %lf = %lf",n,cal(n+10E-10));
return 0;
}
