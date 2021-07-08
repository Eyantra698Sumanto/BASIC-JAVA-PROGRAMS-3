#include<stdio.h>
int main()
{	float s=0,term;
	int n,i,sign=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	term=i*sign;
	  s+=1.0/term;
	  printf("(1/%d)+",(i*sign));
	  sign*=-1;
	}printf("\nSum=%f",s);
}
