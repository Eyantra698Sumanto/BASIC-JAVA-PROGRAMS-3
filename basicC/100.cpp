#include<stdio.h>
int main()
{	int i=0,d=0,s,n,bk;

printf("The amstrong no upto 1000 are:\n");

while(i<=1000)
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
