#include<stdio.h>
int main()
{	int m,n,t,g,l;
printf("Enter 2 nos.");
scanf("%d%d",&m,&n);

if(m>n)
{
g=n;
l=m;
}
else
{
g=m;
l=n;
}
while(m%g!=0||n%g!=0)
{g--;
}
while(l%m!=0||l%n!=0)
{l++;
}
printf("GCD=%d LCM=%d",g,l);
}
