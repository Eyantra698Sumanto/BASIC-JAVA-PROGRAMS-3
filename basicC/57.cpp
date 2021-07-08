#include<stdio.h>
int main()
{	int i=1,j,n,no,s=0,p=1;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the nos.\n");
do{
	scanf("%d",&no);
	s+=no;
	p*=no;
	i++;
}while(i<=n);
printf("Sum=%d\n",s);
printf("Product=%d",p);
	
}
