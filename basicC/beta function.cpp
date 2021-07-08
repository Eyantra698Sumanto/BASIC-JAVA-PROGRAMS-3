#include<stdio.h>
#include<math.h>
 double cal( double x,double n,double m)
{double f=pow(x,n)*pow(1-x,m);
return f;
}
int main()
{

 double d=0,n=10E7,x,x1,d1=0,a=1,b=0,sum=0,n1,m1;

printf("Enter n and m\n");
scanf("%lf%lf",&n1,&m1);
//a=a*M_PI/180;
//b=b*M_PI/180;
x=a/n;x1=b/n;
for(double i=0;i<=n;i=i+1)
{
d=x*(cal(x*i,n1+1,m1+1))+d;//definite integration using sum formula
d1=x1*(cal(x1*i,n1+1,m1+1))+d1;
sum=sum+1;
}
printf("Integration of f'(x))=%lf",(d-d1));
printf("\n%lf",sum);

}

		

