#include<stdio.h>
int main()
{	int a, b,g,c;
	printf("Enter 3 nos.\n");
	scanf("%d%d%d",&a,&b,&c);
	g=a>b?(a>c?a:c):(b>c?b:c);
	printf("The greatest of the nos.=%d",g);
}
