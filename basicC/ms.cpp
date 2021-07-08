#include<stdio.h>
#define SIZE 100

int main()
{
	int a[SIZE],n,i=0,b[SIZE],j=0,m,c[SIZE],k=0;
	printf("Enter the size of the arrays\n");
	scanf("%d %d ",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	
	for(i=0;i<m;i++)
	scanf("%d ",&b[i]);
	i=0;
	while(i<n||j<m)
	{
		if((a[i]<b[j])||j==m)
		{
		c[k]=a[i];
		i++;
		}
		else
		{
		c[k]=b[j];
		j++;
		}
		 k++;
	}
		for(i=0;i<k;i++)
		printf("%d ",c[i]);
		return 0;
}
