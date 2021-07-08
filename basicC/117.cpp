#include<stdio.h>
int prime(int n)
{	for(int i=2;i<n;i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main()
{int n;
printf("Enter the number\n");
scanf("%d",&n);
if(prime(n)==1)
printf("Prime number\n");
else
printf(" Not Prime number\n");
}

