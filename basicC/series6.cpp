#include<stdio.h>
int main()
{	float s=0;
	int n,i,sign=1,term=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
	  s+=1.0/term*sign;
	  printf("(%d/%d!)+",sign,i);
	  term*=i+1;
	  sign*=-1;
	}printf("\nSum=%f",s);
}
