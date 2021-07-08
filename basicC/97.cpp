#include<stdio.h>
int main()
{	int m,n,t,g;
printf("Enter 2 nos.");
scanf("%d%d",&m,&n);

/*while(n>0)
{
 t=n;
 n=m%n;
m=t;
}
printf("GCD=%d",m);*/
if(m>n)
g=n;
else
g=m;
while(m%g!=0||n%g!=0)
{g--;
}

printf("GCD=%d",g);
}
