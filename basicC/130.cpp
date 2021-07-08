#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	printf("Enter elements");
	for(int i=0;i<n;i++)
	scanf("%d",&p[i]);
		printf("The elements are:\n");
	for(int i=0;i<n;i++)
	printf("%d ",p[i]);
	}
