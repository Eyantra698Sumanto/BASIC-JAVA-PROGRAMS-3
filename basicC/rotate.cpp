#include<stdio.h>
int main()
{int a[]={1,2,3,4,5},t,i;
t=a[4];
for(i=4;i>=0;i--)
{a[i]=a[i-1];
}a[0]=t;
 for(i=0;i<5;i++)
{printf("%d",a[i]);
}
printf("\n%d",sizeof(&t));
}
