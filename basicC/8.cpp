#include<stdio.h>
int main()
{ 	int n,t,h,u;
	printf("Enter a three digit no. \n");
	scanf("%d",&n);
	u=n%10;
	t=(n%100)/10;
	h=n/100;
	printf("Units digit=%d\n",u);
	printf("Tens digit=%d\n",t);	
	printf("Hundred digit=%d",h);
	
}
