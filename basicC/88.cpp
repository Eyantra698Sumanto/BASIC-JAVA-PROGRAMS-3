#include<stdio.h>
int main()
{	int i,d,n,no=0,bk,k;
printf("Enter a no. \n");
scanf("%d",&n);
while(n>0)
{
	d=n%10;
	bk=bk*10+d;
	n=n/10;
}
while(bk>0)
{
	no=bk%10;
	bk=bk/10;
	if(no==0)
	printf("Zero ");
	else if(no==1)
	printf("One ");
	else if(no==2)
	printf("Two ");
	else if(no==3)
	printf("Three ");
	else if(no==4)
	printf("Four ");
	else if(no==5)
	printf("Five ");
	else if(no==6)
	printf("Six ");
	else if(no==7)
	printf("Seven ");
	else if(no==8)
	printf("Eight ");
	else
	printf("Nine ");
}
}
