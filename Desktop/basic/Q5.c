#include<stdio.h>
#define SIZE 100
int read(int *p,int n)
{
 int i;
 for(i=0;i<n;i++)
 { printf("Enter the  element %d ",i+1);
  scanf("%d",p);
  p++;
  }
}
int display(int *p,int n)
{
 int i;
for(i=0;i<n;i++)
 {printf("%d ",*p);
 p++;}
}

 
int reverse(int *p,int n,int *p2)
{
 int i,t;
 for(i=0;i<n/2;i++)
 { t=*p;
   *p=*p2;
   *p2=t;
    p++;
    p2--;
  }
}
int main()
{
 int a[SIZE],i,n;
 printf("Enter the size of the array\n");
 scanf("%d",&n);
read(a,n);
printf("The entered array is:\n");
display(a,n);
printf("\nThe reversed array is:\n");
reverse(a,n,&a[n-1]);
display(a,n);
}
/*
Enter the size of the array
5
Enter the  element 1 21
Enter the  element 2 22
Enter the  element 3 23
Enter the  element 4 24
Enter the  element 5 25
The entered array is:
21 22 23 24 25
The reversed array is:
25 24 23 22 21
 */
