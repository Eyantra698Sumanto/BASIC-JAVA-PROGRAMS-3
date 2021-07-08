#include<stdio.h>
int main()
{	int i,j,n;
printf("Enter a number\n");
scanf("%d",&n);
printf("The factors of the number are:\n");
for(i=1;i<=n;i++)
{	if(n%i==0)
	printf("%d ",i);

}}
