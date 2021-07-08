#include<stdio.h>
struct rational
{
	int d;
	int n;
};
rational add(rational no1,rational no2)
{ rational no3;int i;
if(no1.d%no2.d==0)
{ no3.d=no1.d;
	no3.n=no1.n+(no1.d/no2.d)*no2.n;
}
else if(no2.d%no1.d==0)
{ no3.d=no2.d;
	no3.n=(no2.d/no1.d)*no1.n+no2.n;
}
else
{
 no3.d=no1.d*no2.d;
	no3.n=no1.n*no2.d+no1.d*no2.n;
}
for(i=no3.d;i>=2;i--)
if(no3.d%i==0&&no3.n%i==0)
break;
no3.d=no3.d/i;
no3.n=no3.n/i;

	return no3;
}
int main()
{	
	rational no1,no2,no3;
	printf("Enter the num and deno part of the first number\n");
	scanf("%d%d",&no1.n,&no1.d);
	fflush(stdin);
	printf("Enter the num and deno part of the second number\n");
	scanf("%d%d",&no2.n,&no2.d);
	
	no3=add(no1,no2);
	printf("Addition=%d/%d",no3.n,no3.d);
}

	
	
	

