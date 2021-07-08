#include<stdio.h>
#define PI 3.14159

int oddeven(int n)
{
	if(n%2==0)
	return 1;
	return 0;
}
int leap(int n)
{
	if(n%100!=0&&n%4==0||n%400==0)
	return 1;
	return 0;
}
int max(int a,int b,int c)
{int m=a>b?(a>c?a:c):(b>c?b:c);
return m;
}
int swap(int *p1,int *p2)
{int t;
t=*p1;
*p1=*p2;
*p2=t;
}
int circle(float r,float *a,float*p)
{*p=2*PI*r;
*a=PI*r*r;
}
int rect(float l,float b,float *a,float*p)
{*p=2*(l+b);
*a=l*b;
}
long fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}

int main()
{	
	int x,n,m,r,c,p,i,ch;float a,p1,l,b;
	printf("Enter choice\n");
	printf("1.odd or even\n");	
	printf("2.leap year\n");
	printf("3.max\n");
	printf("4.swap\n");
	printf("5.circle\n");
	printf("6.rectangle\n");
	printf("7.nCr and nPr\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter a no.\n");
			scanf("%d",&n);
			if(oddeven(n))
			printf("Even");
			else
			printf("Odd");
			break;
		case 2:
			printf("Enter the year.\n");
			scanf("%d",&n);
		if(leap(n))
			printf("Leap Year");
			else
			printf("Not a leap year");
			break;
		case 3:
			printf("Enter  three nos.\n");
			scanf("%d%d%d",&x,&m,&n);
			printf("Maximum=%ld",max(x,m,n));
			break;
		case 4:
			printf("Enter  two nos.\n");
			scanf("%d%d",&x,&n);
			printf("Before swap x=%d,n=%d",x,n);
			swap(&x,&n);
			printf("After swap x=%d,n=%d",x,n);
			break;
	case 5:
			printf("Enter radius.\n");
			scanf("%f",&b);
			circle(b,&a,&p1);
			printf("Area=%f\nperimeter=%f\n",a,p1);
			break;
			case 6:
				printf("Enter length and breadth\n");
			scanf("%f%f",&l,&b);
			rect(l,b,&a,&p1);
			printf("Area=%f\nperimeter=%f\n",a,p1);
			break;
			case 7:
			printf("Enter n and r\n");
			scanf("%d%d",&n,&r);
			c=fact(n)/(fact(n-r)*fact(r));
			p=fact(n)/(fact(n-r));
			printf("ncr=%d\n",c);
			printf("npr=%d\n",p);
			break;
			
			default:
			printf("WRONG CHOICE");	
}}
