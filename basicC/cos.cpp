#include<stdio.h>
#define PI 3.1415926
int main()
{
	float angle,x,term=1,sum=0;
	int sign=1,i=1;
		printf("Enter the angle in degrees\n");
	scanf("%f",&angle);
	x=angle*(PI/180);
	while(term>=0.0000001)
	{	
	  sum+=term*sign;
	  printf("(x^%d/%d!)+",2*i-2,sign*(2*i-2));
	  term*=(x*x)/((2*i)*(2*i-1));
	  sign*=-1;
	  i++;
	}printf(".....\ncos(%f)=%f",angle,sum);
	
	
}
