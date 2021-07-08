#include<stdio.h>
#define PI 3.14159
int main()
{
	int i,n;
	float x,angle,sum,term,sign=1;
	printf("Enter the angle in degrees\n");
	scanf("%f",&angle);
	x=angle*PI/180;
	term=x;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{sum+=sign*term;
	 term*=x*x/((2*i)*(2*i+1));
	 sign*=-1;
	}
	printf("sin(%.0f)=%f",angle,sum);
}
	
