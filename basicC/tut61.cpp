#include<stdio.h>
main()
{
int a[] = {2,3,4,5,6};
int i;
int *p;
for(p = &a[4], i = 0 ; i< 5; i++)
printf("%d\n",p[-i]);//you can use subscript notation with explicit pointer
//expanded as *(p-i)
return 0;
}
