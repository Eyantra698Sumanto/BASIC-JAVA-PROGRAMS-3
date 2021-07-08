#include<stdio.h>
long fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
long power(int x,int n)
{
	if(n==1)
	return x;
	return(x*power(x,n-1));
}
int gcd(int m,int n)
{if(n==0)
 return m;
 return(gcd(n,m%n));
}
int add(int x,int n)
{if(n==0)
 return x;
 return(1+add(x,n-1));
}
int multiply(int x,int n)
{if(n==1)
 return x;
 if(n==0)
return 0;
 return(x+multiply(x,n-1));
}
int addn(int n)
{if(n==1)
 return 1;
 return(n+addn(n-1));
}
int addarr(int a[],int n)
{if(n==1)
 return a[0];
 return(a[n-1]+addarr(a,n-1));
}
int fibo(int n)
{if(n==1)
 return 0;
 else if(n==2)
 return 1;
 return(fibo(n-1)+fibo(n-2));
}
long binary(int n)
{
	if(n==0)
	return 0;
	return(n%2+10*binary(n/2));
}
int main()
{	int a[100];
	int x,n,i,ch;
	printf("Enter choice\n");
	printf("1.factorial\n");	
	printf("2.power\n");
	printf("3.gcd\n");
	printf("4.add\n");
	printf("5.multiply\n");
	printf("6.Add n natural nos.\n");
	printf("7.Add array elements\n");
	printf("8.binary equivalent\n");
	printf("9.Fibonacci series\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter a no.\n");
			scanf("%d",&n);
			printf("Answer=%ld",fact(n));
			break;
		case 2:
			printf("Enter two nos.\n");
			scanf("%d%d",&x,&n);
			printf("Answer=%ld",power(x,n));
			break;
		case 3:
			printf("Enter  two nos.\n");
			scanf("%d%d",&x,&n);
			printf("Answer=%ld",gcd(x,n));
			break;
		case 4:
			printf("Enter  two nos.\n");
			scanf("%d%d",&x,&n);
			printf("Answer=%ld",add(x,n));
			break;
	case 5:
			printf("Enter 2 nos.\n");
			scanf("%d%d",&x,&n);
			printf("Answer=%ld",multiply(x,n));
			break;
			case 6:
			printf("Enter a no.\n");
			scanf("%d",&n);
			printf("Answer=%ld",addn(n));
			break;
			case 7:
			printf("Enter the size of array\n");
			scanf("%d",&n);
			printf("Enter elements\n");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("Answer=%d",addarr(a,n));
			break;
			case 8:
			printf("Enter a no.\n");
			scanf("%d",&n);
			printf("Answer=%d",binary(n));
			break;
			case 9:
			printf("Enter a no.\n");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			printf("%d ",fibo(i));
			break;
			default:
			printf("WRONG CHOICE");	
}}
