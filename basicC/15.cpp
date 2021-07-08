#include<stdio.h>
int main()
{	int a, b,t;
	printf("Enter 2 nos.\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping:a=%d  b=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("After swapping:a=%d  b=%d",a,b);
}
