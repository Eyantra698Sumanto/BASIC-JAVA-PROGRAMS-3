#include<stdio.h>
main()
{
	int a[]={10,20,30,40,50};
	int *j,*k=0;
	j=&a[4];
	k=(a+4);
	if(j==k)
	printf("Same");
	else
	printf("Different");
}
