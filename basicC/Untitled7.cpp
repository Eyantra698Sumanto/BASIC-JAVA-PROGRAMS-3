//#include<stdio.h>
//int main()
//{
//int a = 10;
//int *ptr = &a;
//aprintf("%p",ptr);
//printf("%d",a);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a = 10;
//int *ptr = &a;
//*++ptr;
//printf("%d",a);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a = 10;
//int *ptr = &a;
//(*ptr)++;
//printf("%d",a);
//return 0;
//}
#include<stdio.h>
int main()
{
int a = 10;
int *ptr = &a;
++(*ptr);
printf("%d",a);
return 0;
}
