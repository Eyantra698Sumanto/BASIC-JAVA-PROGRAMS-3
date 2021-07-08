#include<stdio.h>
int main()
{	int n,i;float s=0;
	printf("Enter a no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s+=1.0/i;
	printf("Sum of  series=%f",s);	
}
