#include<stdio.h>
int gcd(int m,int n)
{if(n==0)
 return m;
 return gcd(n,m%n);
}
int main()
{
	printf("%d",gcd(12,15));
}

