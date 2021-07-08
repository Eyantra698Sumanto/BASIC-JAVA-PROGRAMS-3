#include<stdio.h>
int fact(int n)
{	if(n==0)
	return 1;
	return(n*fact(n-1));
}
int main()
{int n,r,ncr;
printf("Enter n and r\n");
scanf("%d%d",&n,&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("%dc%d=%d",n,r,ncr);
}

