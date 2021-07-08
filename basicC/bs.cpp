// bubble sort (sorting data in  ascending order)

#include<stdio.h>
#define SIZE 20
void bubblesort(int a[], int n)
{
	int pass, i, temp; 

	for(pass = 1; pass<= n-1 ; pass++)//no of passes 1 to n-1
	{
		for(i = 0; i < n-pass ; i++)// set of comparision
		{                            //no of comparision = n-current pass no
			if( a[i] > a[i+1]) //if first element > second element then swap them
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	
	}
}

int main()
{
	int a[SIZE], n , i;

	printf("Enter the number of elements in an array:"); 
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",i+1);
		scanf("%d",&a[i]);
	}

	printf("\nBefore sorting array is: ");

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	 
	bubblesort(a,n); //call to bubblesort
	
	printf("\nAfter sort final array is: "); 

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	return 0;
}
