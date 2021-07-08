#include<stdio.h>
int main()
{
int a[100],i=0,n,k=0,m,l,f,e,p=-1;
printf("Enter size of arr1\n");
scanf("%d",&n);
printf("Enter  elements of arr1 in ascen order\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter  element to be searched\n");
	scanf("%d",&e);
	f=0;
	l=n-1;
	while(f<=l)
	{m=(l+f)/2;
	if(e==a[m])
	{
	p=m;
	break;}
	else if(e<a[m])
	l=m-1;
	else
	f=m+1;
	}
if(p==-1)
printf("not found\n");
else
printf("found at %d\n",m+1);
}
