#include<stdio.h>
void add(int *a,int *b,int *c)
{
	*c=*a+*b;
}
int main()
{int a,b,c;
printf("Enter the nos.\n");
scanf("%d%d",&a,&b);
add(&a,&b,&c);
printf("ADDITION=%d",c);
}

