#include<stdio.h>
#include<math.h>
int main()
{	int i=0,j,n,bit, b=0;
printf("Enter a decimal number\n");
scanf("%d",&n);
	while(n>0)
	{
		bit=n%2;
		b=b+bit*(int)pow(10,i);
		n=n/2;
		i++;
	}
	printf("The binary form =%d",b);
	
}
