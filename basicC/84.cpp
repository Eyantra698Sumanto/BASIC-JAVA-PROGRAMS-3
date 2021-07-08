#include<stdio.h>
int main()
{	int i,j,n;
printf("Enter the year\n");
scanf("%d",&n);
	if(n%4==0&&n%100!=0||n%400==0)
	printf("LEAP YEAR\n");
	else
		printf("NOT A LEAP YEAR\n");

}
