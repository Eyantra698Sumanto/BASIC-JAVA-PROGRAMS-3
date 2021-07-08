#include<stdio.h>
#include<math.h>
int main()
{	int i=0,j,n,d, s=0,n1;
printf("Enter a number\n");
scanf("%d",&n);
n1=n;
	while(n>0)
	{
		d=n%10;
		s=s*10+d;
		n=n/10;
		i++;
	}
	if(s==n1)
	printf("The no. is palindrome\n");
	else
		printf("The no. is not palindrome\n");
	
}
