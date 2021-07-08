#include<stdio.h>
int main()
{	int x,n,i,s;
	printf("Enter a no:\n");
	scanf("%d",&x);
	printf("Enter power of no.:\n");
	scanf("%d",&n);
	s=x;
	for(i=2;i<=n;i++)
	{
	s*=x;
	printf("%d to the power %d=%d\n",x,i,s);
}
}
