#include<stdio.h>
int main()
{	int n,i,s=0;
	printf("Enter a no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s+=i;
	printf("Sum of %d natural numbers=%d",n,s);	
}
