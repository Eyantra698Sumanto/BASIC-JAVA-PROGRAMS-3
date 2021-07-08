#include <stdio.h>
#include <math.h>
int main() {
int t;
long  n,i,j,a,b,c;
scanf("%d",&t);
for(i=1;i<=t;i++)
{j=0;
scanf("%d",&n);
for(a=1;a<=n;a++)
{for(b=1;b<=a;b++)
{for(c=1;c<=b;c++)
{if(a+b+c>n)
continue;
if(c*c+b*b==a*a-1)
{
j++;
}

}//if(a+b+c>n)
//continue;
}
//if(a+b+c>n)
//continue;
}
printf("%ld\n",j);


}}

