#include <stdio.h>
#include <math.h>
long long palin(long long n)
{long long s=0;int d;
while(n>0)
{d=n%10;
s=s*10+d;
n/=10;
}return s;
}
int main() 
{long long sb,n,s=0,i,n1;int d,j,b;
scanf("%lld%d",&n,&b);

for(i=10;i<=n;i++)
{j=0;sb=0;n1=i;
if(palin(i)==i)
{
while(n1>0)
{d=n1%b;
sb+=d*pow(10,j);
n1=n1/b;
j++;
}
if(palin(sb)==sb)
s+=i;
}
}
printf("%lld\n",s);
}
