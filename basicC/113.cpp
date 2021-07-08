#include<stdio.h>
void odd(int n)
{	for(int i=1;i<=2*n-1;i+=2)
	printf("%d ",i);
}
int main()
{int n;
printf("Enter the n\n");
scanf("%d",&n);
printf("n Odd numbers \n");
odd(n);
}

