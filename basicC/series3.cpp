#include<stdio.h>
int main()
{	float s=0;
	int n,i,sign=1,term=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
	  s+=1.0/term;
	  printf("(1/%d)+",(term));
	  term=2*i+1;
	}printf("\nSum=%f",s);
}
