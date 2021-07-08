#include<stdio.h>
#define SIZE 100

void read(int *p,int n)
{int i;
for(i=0;i<n;i++)
{
	printf("Enter the %d element ",i+1);
	scanf("%d",p);	
	p++;
}
}
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<sizeof(a);i++)
	{for(j=0;j<n-i-1;j++)
	 if(a[j]>a[j+1])
	 {t=a[j];
	  a[j]=a[j+1];
	  a[j+1]=t;
	 }
	}
}
void display(int *p,int n)
{int i;
for(i=0;i<n;i++)
{
	printf("%d ",*p);
	p++;
}
}int main()
{
	int a[SIZE],n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	read(a,n);
	printf("Bfore sorting, the  array is:\n");
	display(a,n);
	sort(a,n);
	printf("\nThe sorted array is:\n");
	display(a,n);
	return 0;
}
/*Enter the size of the array
5
Enter the 1 element 12
Enter the 2 element 78
Enter the 3 element 90
Enter the 4 element 13
Enter the 5 element 6
Bfore sorting, the  array is:
12 78 90 13 6
The sorted array is:
6 12 13 78 90
*/

