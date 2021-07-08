#include<stdio.h>
float avg(int a,int b,int c)
{
	return(a+b+c)/3;
}
int main()
{int a,b,c;
printf("Enter the nos.\n");
scanf("%d%d%d",&a,&b,&c);
printf("Average=%f",avg(a,b,c));
}

