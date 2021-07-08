#include<stdio.h>
int main()
{	int n,i,f=1;
	printf("Enter a no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("%d!=%d",n,f);	
}
