#include<stdio.h>
#include<math.h>
#define PI 3.14258
double cal(double x,double y)
{double f=sin(x)*cos(y);
return f;
}

int main()
{

double d=0,n=pow(10,6),x,x1,xn,y,y1,yn,xn1,yn1,d1=0,a,b;

printf("Enter a and b\n");
scanf("%lf%lf",&a,&b);
a=a*PI/180;
b=b*PI/180;
x=a/n;x1=b/n;
y=cos(x);
y1=sin(x);
for(double i=0;i<=n;i=i+1)
{for(double j=0;j<=n;j=j+1)
{xn=x*i;
yn=y*j;
xn1=x1*i;
yn1=y1*j;
d=x*(cal(xn, yn))+d;//definite integration using sum formula
d1=x1*(cal(xn1, yn1))+d1;
}}
printf("Integration of f'(x))=%lf",(d-d1));

}

