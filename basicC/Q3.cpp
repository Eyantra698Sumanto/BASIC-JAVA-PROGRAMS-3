#include<stdio.h>
int main()
{
	int i,j,n;
	float s=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s+1.0/i;
		printf("The sum of the series is %f\n",s);	
}
