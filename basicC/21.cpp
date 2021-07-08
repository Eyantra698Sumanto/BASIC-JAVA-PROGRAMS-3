#include<stdio.h>
int main()
{	int a,b;
	printf("Enter a no.:\n");
	scanf("%d%d",&a,&b);
	printf("AND=%d\n",a&b);
	printf("OR=%d\n",a|b);
	printf("EXOR=%d\n",a^b);
	printf("NOT a=%d NOTb=%d\n",~a,~b);



}
