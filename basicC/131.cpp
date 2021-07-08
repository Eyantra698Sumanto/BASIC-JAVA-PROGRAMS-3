#include<stdio.h>
int main()
{
int a[100],b[100],c[100],i=0,n,j=0,k=0,m;
printf("Enter size of arr1\n");
scanf("%d",&m);
printf("Enter size of arr2\n");
scanf("%d",&n);
printf("Enter sorted elements of arr1 in ascen order\n");
	for(int i=0;i<m;i++)
	scanf("%d",&a[i]);
printf("Enter sorted elements of arr2 in ascen order\n");
	for(int i=0;i<n;i++)
	scanf("%d",&b[i]);
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{c[k]=a[i];
			i++;
		}
		else
		{c[k]=b[j];
			j++;
			}
			k++;	
}
while(i<m)
c[k++]=a[i++];
while(j<n)
c[k++]=b[j++];
printf(" array1:");
	for(int i=0;i<m;i++)
	printf("%d ",a[i]);
	printf("array2:");
	for(int i=0;i<n;i++)
	printf("%d ",b[i]);
printf("Marged array:");
	for(int i=0;i<m+n;i++)
	printf("%d ",c[i]);
}

