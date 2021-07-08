#include<stdio.h>
#define SIZE 100
int main()
{  
	int a[SIZE],n,i=0,b[SIZE],j=0,m,c[SIZE],k=0;
	printf("Enter the size of the arrays\n");
	scanf("%d%d",&n,&m);
	printf("nter array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter array");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	i=0;	fflush(i);
	while(i<n||j<m)
	{
		if((a[i]>b[j])||i==n)
		{
		c[k]=b[j];
		j++;
		}
		else 
		{
		c[k]=a[i];
		i++;
		}
		 k++;
	}
		for(i=0;i<k;i++)
		printf("%d ",c[i]);
		printf("\n");
		for(i=0;i<k;i++)
		printf("%d ",a[i]);	printf("\n");
		for(i=0;i<k;i++)
		printf("%d ",b[i]);
		
		return 0;
}
