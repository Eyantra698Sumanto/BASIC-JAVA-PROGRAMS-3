#include<stdio.h>
void pat(int n)
{	for(int i=1;i<=n;i++)
	{for(int j=1;j<=n-i;j++)
	printf(" ");
	for(int j=1;j<=i;j++)
	printf("%c",j+64);
	for(int j=1;j<i;j++)
	printf("%c",i-j+64);

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

