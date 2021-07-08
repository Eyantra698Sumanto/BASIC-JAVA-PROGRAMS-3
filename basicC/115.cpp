#include<stdio.h>
void pat(int n)
{	for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=i;j++)
	printf("*");
	printf("\n");
}
	
}
int main()
{int n;
printf("Enter the n\n");
scanf("%d",&n);
printf("Pattern: \n");
pat(n);
}

