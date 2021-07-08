#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("Enter the no. of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
			for(j=1;j<=i;j++)
			printf("%2d ",k++);
			printf("\n");
	}
}
