#include<stdio.h>
int main()
{
	int i,j,n,sign=1;
	float s=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+sign*1.0/(2*i-1);
		sign*=-1;
	}
		printf("The sum of the series is %f\n",s);	
}
