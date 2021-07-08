
#include<stdio.h>//to input header files
#include<math.h>
int main()//main function
{
	long num,sum,no,n,d=0,r;
	printf("All Amstrong nos. from 0 to 1000000 are:\n");
	for(no=0;no<=10E7;no++)
	{		n=no;d=0;	
		while(n!=0)
		{++d;
		n=n/10;
		}
		num=no;
		sum=0;
		while(num!=0)
		{r=num%10;
		 sum=sum+(int)pow(r,d);
		 num=num/10;
		}
		if(no==sum)
		{
			printf("%d ",sum);
		}
	}	printf("END");
}
/*output:
All Amstrong nos. from 1 to 500 are:
1 153 370 371 407 
*/
