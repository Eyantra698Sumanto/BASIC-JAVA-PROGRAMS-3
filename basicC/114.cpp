#include<stdio.h>
void odd(int n)
{	for(int i=1;i<=n;i+=2)
	printf("%d ",i);
}
int main()
{int n;
printf("Enter the n\n");
scanf("%d",&n);
printf(" Odd numbers upto n\n");
odd(n);
}

