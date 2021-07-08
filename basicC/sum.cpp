#include<stdio.h>
int sum(int n)
{		if(n==1)
		return 1;
		return(n+sum(n-1));
}
int main()
{int n;
printf("Enter the n\n");
scanf("%d",&n);
printf("Sum of first %d natural numbers=%d",n,sum(n));
return 0;
}
