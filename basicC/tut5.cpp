#include<stdio.h>
void hill(int n)
{
printf("\n%d",n);
if(n <= 100)
{
hill(3*n-1);
}
printf("\n%d",n);
}
int main()
{
hill(1);
return 0;
}
