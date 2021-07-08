#include<stdio.h>
#define SIZE 100
main()
{
int arr[SIZE];
int i,n;
printf("Enter the size of the array\n");
scanf("%d",&n);

for(i=0; i < n; i++)                                                           
{printf("Enter the %dth element:",i+1);
scanf("%d",&arr[i]);
}
printf("The given array is:\n");
for(i=0; i < n-1; i++)
{printf("%d\t",arr[i]);
}
printf("\nThe first difference array is:\n");
for(i=0; i < n-1; i++)
{
arr[i] = arr[i+1] - arr[i];
printf("%d\t",arr[i]);
}
return 0;
}
