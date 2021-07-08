#include<stdio.h>
#define PI 3.1415926
int main()
{
	float angle,x,term,sum=0;
	int sign=1,i=1;
		printf("Enter the angle in degrees\n");
	scanf("%f",&angle);
	x=angle*(PI/180);
	term=x;
	while(term>=0.0000001)
	{	
	  sum+=term*sign;
	  printf("(x^%d/%d!)+",2*i-1,sign*(2*i-1));
	  term*=(x*x)/((2*i+1)*(2*i));
	  sign*=-1;
	  i++;
	}printf("\nsin(%f)=%f",angle,sum);
	
	
}
