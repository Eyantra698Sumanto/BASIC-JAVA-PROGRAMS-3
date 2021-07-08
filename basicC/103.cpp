#include<stdio.h>
int add(int a,int b)
{
	return(a+b);
}
int main()
{int a,b;
printf("Enter the nos.\n");
scanf("%d%d",&a,&b);
printf("ADDITION=%d",add(a,b));
}

