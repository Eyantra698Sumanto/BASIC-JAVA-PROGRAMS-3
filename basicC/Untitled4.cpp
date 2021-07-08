#include<stdio.h>
int main()
{
int a = 10;
int *ptr1 = &a;
int *ptr2 = ptr1 + 1;
printf("Added 1 to pointer %p\n", ptr2);
printf("Subtracted 1 from pointer is %p\n", ptr1 - 1);
return 0;
}
