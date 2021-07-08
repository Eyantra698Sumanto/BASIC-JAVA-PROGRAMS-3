#include<stdio.h>
int main()
{	float s0,v0,a;int t;
	printf("Enter the value of s0,v0,a:\n");
	scanf("%f%f%f",&s0,&v0,&a);
	for(t=1;t<=100;t+=5)
	printf("s(%d)=%f m\n",t,s0+v0+0.5*a*t*t);
	
}
