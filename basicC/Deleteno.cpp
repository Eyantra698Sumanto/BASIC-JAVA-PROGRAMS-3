#include<stdio.h>
int main()
{
	int a[1000],n,i,k,t=0,no;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
		printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	a[n]=0;
	printf("Enter the number to be deleted:");
	scanf("%d",&no);
	for(i=0;i<n;i++)
		 if(no==a[i])
		 {if(a[i]=a[i+1])
		  i--;
		 for(k=i+1;k<n;k++)
			 a[k]=a[k+1];	 //printf("\n%d-%d\n",a[k],k);
			n--;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

	}
