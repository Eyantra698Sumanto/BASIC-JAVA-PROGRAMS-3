#include<stdio.h>
main()
{
int a[] = {10,20,30,40,50};
int i;
for(i=0; i < 5; i++)
{
*(a+i) = a[i] + i[a];
printf("%d\t",*(i+a));
}
}
