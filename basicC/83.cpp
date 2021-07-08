#include<stdio.h>
int main()
{	int i=0,d=0,s,n,bk;
printf("Enter a value of n \n");
scanf("%d",&n);
printf("The amstrong no upto n are:\n");

while(i<=n)
{bk=i;
s=0;
	while(bk>0)
	{
	d=bk%10;
	s+=d*d*d;
	bk=bk/10;
	}

if(s==i)
printf("%d ",i);
i++;
}
}
