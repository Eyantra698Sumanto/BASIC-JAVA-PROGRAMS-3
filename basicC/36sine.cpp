#include<stdio.h>
int main()
{	float x,angle,i=1,term, s=0;int sign=1,n;
	printf("Enter the angle in degrees:\n");
	scanf("%f",&angle);
	x=3.1415926*angle/180;
	term=x;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	s+=term*sign;
	term*=x*x/((2*i+1)*(2*i));
	sign*=-1;
}
	printf("sin(%f)=%f",angle,s);	
}
