#include<stdio.h>
int main()
{	int i=1,j,n,no,s=0,p=1;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the nos.\n");
while(i<=n)
{
	scanf("%d",&no);
	s+=no;
	p*=no;
	i++;
}
printf("Sum=%d\n",s);
printf("Product=%d",p);
	
}
