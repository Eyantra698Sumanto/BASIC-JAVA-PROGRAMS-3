#include<stdio.h>
void num(int n)
{	for(int i=1;i<=n;i++)
	printf("%d ",i);
}
int main()
{int n;
printf("Enter the n\n");
scanf("%d",&n);
printf("Natural numbers upto n\n");
num(n);
}

