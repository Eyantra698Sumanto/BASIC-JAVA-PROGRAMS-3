#include<stdio.h>//to input header files
#include<math.h>
int main()//main function
{
	int n,no,flag=0;
	printf("All Prime nos. from 1 to 50 are:\n");
	for(no=2;no<=50;no++)
	{	flag=0;
		for(n=2;n<=sqrt(no);n++)
		{
		 if(no%n==0)
		 {
		  flag=1;
		  break;
		 }
		}
		if(flag==0)
		{printf("%d ",no);
		}
	}
}
