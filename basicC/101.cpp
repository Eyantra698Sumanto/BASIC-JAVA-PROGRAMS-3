#include<stdio.h>
int main()
{	int i,j,n,f=1;

printf("The prime numbers upto 100 are:\n");
for(i=2;i<=100;i++)
{f=1;
for(j=2;j<i;j++)
{	if(i%j==0)
	{
		f=0;
		break;
		
	}
}
if(f==1)
printf("%d ",i);
}}
