#include <stdio.h>
#include <math.h>
int main() {
unsigned int t,n,k,j=3,i,s,a=0,b=0;
scanf("%d",&t);
for(i=1;i<=t;i++)
{scanf("%d",&n);
for(;j<=n;j++)
{s=0;
for(k=2;k<=j/2;k++)
{if(j%k==0)
s++;
}
if(s==a){b++;
printf("%d %d\n",j,b);
}

a=s;
}
 printf("%d\n",b);
}}
