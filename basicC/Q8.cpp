#include<stdio.h>
int main()
{
	int i,j,n,f=1,sign=1;
	double s=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
			s=s+sign*1.0/f;
			sign*=-1;
			f*=(2*i)*(2*i+1);
			
	}
		printf("The sum of the series is %lf \n",s);	
}
