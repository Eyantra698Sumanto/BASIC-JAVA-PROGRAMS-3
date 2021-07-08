#include<stdio.h>
int main()
{	int n,rev;
	printf("Enter a no.:\n");
	scanf("%d",&n);
	rev=(n%10)*10+n/10;
	printf("Reversed number=%d",rev);
	
}
