#include<stdio.h>
int main()
{	float s=0;
	int n,i;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  s+=1.0/i;
	  printf("1/%d+",i);
	}printf("\nSum=%f",s);
}
