#include<stdio.h>
int main()
{	
	int r,c,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{	
	 	for(c=n;c>=r;c--)
		printf("%d",n-c+1);
		printf("\n");
		}
}
