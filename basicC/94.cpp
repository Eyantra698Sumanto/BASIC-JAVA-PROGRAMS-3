#include<stdio.h>
int main()
{	int i,s,n;
again:
printf("Enter a number\n");
scanf("%d",&n);
s+=n;
if(s<100)
goto again;
printf("Sum=%d",s);
}
