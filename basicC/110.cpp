#include<stdio.h>
void mul(int n)
{	for(int i=1;i<=10;i++)
	printf("%d*%d=%d\n",n,i,n*i);
}
int main()
{int n;
printf("Enter the number\n");
scanf("%d",&n);
mul(n);
}

