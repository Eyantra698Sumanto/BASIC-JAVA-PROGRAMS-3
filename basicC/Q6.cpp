#include<stdio.h>
int main()
{	double d,m,in,f,cm;
	printf("Enter distance in kilometers\n");
	scanf("%lf",&d);
	m=1000*d;
	f=3.28084*m;
	cm=100*m;
	in=cm*0.3937;
	printf("Distance in meters=%lf\n",m);
	printf("Distance in feets=%lf\n",f);
	printf("Distance in centimeters=%lf\n",cm);	
		printf("Distance in inches=%lf\n",in);

	
}
