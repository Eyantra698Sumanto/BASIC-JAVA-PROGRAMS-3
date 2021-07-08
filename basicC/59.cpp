#include<stdio.h>
int main()
{	int i=0,d=0,n1; float n=0.0;
printf("Enter the value of n\n");
scanf("%f",&n);
n1=(int)n;
while(n1>0)
{
	n1=n1/10;
	i++;
}
while(n>10E-4)
{
	n=n*10;
	n1=(int)n;
	n=n-n1;
	d++;
	printf("%d\n",n1);
}
printf("The no of digits before decimal point are=%d\n",i);
printf("The no of digits after decimal point are=%d\n",d);

}
