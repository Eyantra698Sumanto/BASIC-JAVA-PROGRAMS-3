#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{	k=i;
		for(j=1;j<=n+1-i;j++)
		printf("  ");
		for(j=1;j<=2*i-1;j++)
		{ if(j<=i)
		  	printf("%d ",--k);
		  else
			printf("%d ",++k);
		}
		printf("\n");
	}
}
