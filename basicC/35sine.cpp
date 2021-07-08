#include<stdio.h>
int main()
{	float x,angle,i=1,term, s=0;int sign=1;
	printf("Enter the angle in degrees:\n");
	scanf("%f",&angle);
	x=3.1415926*angle/180;
	term=x;
	while(term>=0.000001)
	{
	s+=term*sign;
	term*=x*x/((2*i+1)*(2*i));
	sign*=-1;
	i++;
}
	printf("sin(%.0f)=%f",angle,s);	
}
