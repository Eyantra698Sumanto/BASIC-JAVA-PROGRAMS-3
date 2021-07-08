#include<stdio.h>
#define PI 3.1415926
int main()
{

	int m,n,t;
		printf("Enter two numbers\n");
		scanf("%d%d",&m,&n);
	while(n>0)
	{ t=n;	
	  n=m%n;
	  m=t;
	}printf("GCD=%d",m);
	
	
}
