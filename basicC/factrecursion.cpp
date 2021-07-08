#include<stdio.h>//calculates till 170
double fact(int n)
{if(n==0)
 return 1;
 return(n*fact(n-1));
}
int main()
{	
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("%d!=%lf",n,fact(n));
}
