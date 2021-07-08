#include<stdio.h>
int main()
{
long n=1000,i,no,d,sum=0;
while(n<10000)
{   no=n;
	no=(n%100)*(n%100)+(n/100)*(n/100);
	
	if(n==no)
	printf("%d  ",no);
	n++;
}return 0;
}
