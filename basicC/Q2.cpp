#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,d,real,img;
	printf("Enter the value of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
		printf("Roots are equal=%f",b/(2*a));
	else if(d>0)
	 {printf("Roots are unequal\n");
		  printf("Root1=%f\n",(b+sqrt(d))/(2*a));
	    printf("Root2=%f\n",(b-sqrt(d))/(2*a));
	}
	else
	{real=b/(2*a);
	img=(sqrt(-d))/(2*a);
	 printf("Roots are imaginary\n");
	 printf("Root1=%f+%fi\n",real,img);
	printf("Root2=%f-%fi\n",real,img);
}}
