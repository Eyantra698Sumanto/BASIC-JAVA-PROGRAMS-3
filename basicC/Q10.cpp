#include<stdio.h>
#define PI 3.141593
int main()
{
	int i,n;
	float x,angle,sum,term=1,sign=1;
	printf("Enter the angle in degrees\n");
	scanf("%f",&angle);
	x=angle*PI/180;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{sum+=sign*term;
	 term*=x*x/((2*i-1)*(2*i));
	 sign*=-1;
	}
	printf("cos(%.0f)=%f",angle,sum);
}
	
