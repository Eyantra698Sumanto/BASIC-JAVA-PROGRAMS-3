#include<stdio.h>
int main()
{	int i,d,s,n,bk;
printf("Enter a no. \n");
scanf("%d",&n);
bk=n;
while(n>0)
{
	d=n%10;
	s+=d*d*d;
	n=n/10;
}
if(s==bk)
printf("Amstrong no.\n");
else
printf("Not an Amstrong no.\n");
}
