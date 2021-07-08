#include<stdio.h>
int main()
{
int j = 1;
int k = 2;
int *ptr = &j; //now ptr pointer point j
printf("j has the value %d and is stored at %p\n", j, &j);
printf("ptr has the value %p and is stored at %p\n", ptr, &ptr);
printf("The value of the integer pointed to by ptr is %d\n", *ptr);
ptr = &k; //now ptr pointer point to k
printf("k has the value %d and is stored at %p\n", k, &k);
printf("ptr has the value %p and is stored at %p\n", ptr, &ptr);
printf("The value of the integer pointed to by ptr is %d\n", *ptr);
printf("Bytes allocated for pointer variable %d",sizeof(ptr));
return 0;
}
