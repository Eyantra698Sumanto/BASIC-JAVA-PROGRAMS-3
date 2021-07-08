#include<stdio.h>
#define SIZE 100
int main()
{
long long long a[SIZE]={0,1};
int i,n,temp;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=2;i<n;i++)
a[i]=a[i-1]+a[i-2];
printf("The fibonacci series is:\n");
for(i=0;i<n;i++)
printf("%llld\t",a[i]);
}

