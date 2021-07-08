#include<stdio.h>
struct rational
{
	int integral;
	float fractional;
};
rational add(rational no1,rational no2)
{ rational no3;
 no3.integral=0;
	no3.fractional=no1.fractional+no2.fractional;
	if(no3.fractional>=1)
	{no3.integral=1;
	no3.fractional--;
	}
	no3.integral+=no1.integral+no2.integral;
	return no3;
}
int main()
{	float ans;
	rational no1,no2,no3;
	printf("Enter the integral and rational part of the first number\n");
	scanf("%d%f",&no1.integral,&no1.fractional);
	fflush(stdin);
	printf("Enter the integral and rational part of the second number\n");
	scanf("%d%f",&no2.integral,&no2.fractional);
	no3=add(no1,no2);
	ans=no3.integral+no3.fractional;
	printf("Addition=%f",ans);
}

	
	
	

