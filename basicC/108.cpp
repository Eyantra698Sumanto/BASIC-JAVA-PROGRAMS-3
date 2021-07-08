#include<stdio.h>
int fact(int n)
{	if(n==0)
	return 1;
	return(n*fact(n-1));
}
int main()
{int n,r,npr;
printf("Enter n and r\n");
scanf("%d%d",&n,&r);
npr=fact(n)/fact(n-r);
printf("%dp%d=%d",n,r,npr);
}

