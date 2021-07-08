#include<stdio.h>
int power(int x,int n)
{	if(n==0)
	return 1;
	return(x*power(x,n-1));
}
int main()
{int n,x;
printf("Enter the x and n\n");
scanf("%d%d",&x,&n);
printf("x^n=%d",power(x,n));
}

