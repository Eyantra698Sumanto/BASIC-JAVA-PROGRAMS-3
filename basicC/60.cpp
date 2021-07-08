#include<stdio.h>
int main()
{	int i=0,j,n,no=0,d;
printf("Enter the value of n\n");
scanf("%d",&n);
while(n>0)
{	d=n%10;
    no=no*10+d;
	n=n/10;
	i++;
}
printf("The reversed no=%d\n",no);
}
