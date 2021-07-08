#include<stdio.h>
#include<math.h>
 double cal( double x)
{double f=sin (x);
return f;
}
int main()
{

 double d=0,n=10E7,x,x1,d1=0,a,b,sum=0;

printf("Enter a and b\n");
scanf("%lf%lf",&a,&b);
a=a*M_PI/180;
b=b*M_PI/180;
x=a/n;x1=b/n;
for(double i=0;i<=n;i=i+1)
{
d=x*(cal(x*i))+d;//definite integration using sum formula
d1=x1*(cal(x1*i))+d1;
sum=sum+1;
}
printf("Integration of f'(x))=%lf",(d-d1));
printf("\n%lf",sum);

}

		

