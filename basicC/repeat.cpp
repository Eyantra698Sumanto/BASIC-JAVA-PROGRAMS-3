#include<stdio.h>
int main()
{
	int a[1000],n,i,j,k,t=0;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	a[n]=0;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		 {
		 if(a[i]==a[j])
		 {if(a[j]=a[j+1])
		  j--;
		 for(k=j+1;k<n;k++)
		{	 a[k]=a[k+1];	 //printf("\n%d-%d\n",a[k],k);
		
		}

		n--;
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

	}
