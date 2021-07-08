#include<stdio.h>
int main()
{
int i = 1;
char *p = (char *)&i;
if (*p == 1)
{
printf("Its little endian%d %p",i,p);
}
else
{
printf("Its big endian");
}
return 0;
}

