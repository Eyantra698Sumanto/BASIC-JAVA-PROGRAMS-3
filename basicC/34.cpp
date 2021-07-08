#include<stdio.h>
int main()
{	int n,i,f=1;float s=0;
	printf("Enter a no:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{f*=i;
	s+=1.0/f;
}
	printf("Sum of  series=%f",s);	
}
