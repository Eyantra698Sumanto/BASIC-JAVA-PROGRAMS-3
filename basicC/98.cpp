#include<stdio.h>
int main()
{	int m,n,t,l;
printf("Enter 2 nos.");
scanf("%d%d",&m,&n);


if(n>m)
l=n;
else
l=m;
while(l%m!=0||l%n!=0)
{l++;
}

printf("LCM=%d",l);
}
