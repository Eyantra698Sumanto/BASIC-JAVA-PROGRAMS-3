#include<stdio.h>
int main()
{
int i = 1;
char p = (char )i;
if (p == 1)
{
printf("Its little endian%c",p);
}
else
{
printf("Its big endian%c",p);
}
return 0;
}

