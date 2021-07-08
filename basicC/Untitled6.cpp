#include<stdio.h>
int main()
{
float a = 5.5, b = 6.5;
float *ptr1 = &a;
float *ptr2 = &b;
*ptr1 = *ptr1 + *ptr2;
*ptr2 = *ptr1 - *ptr2;
*ptr1 = *ptr1 - *ptr2;
printf("a = %f and b = %f", a,b);
return 0;
}
