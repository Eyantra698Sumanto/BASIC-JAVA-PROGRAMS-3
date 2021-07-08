#include<stdio.h>
int main()
{	int i=0,j,n,d;
printf("Enter the value of n\n");
scanf("%d",&n);
while(n>0)
{	d=n%10;
	n=n/10;
	i++;
}
printf("The no of digits are=%d\n",i);
}
