#include<stdio.h>//to input header files

long binary(int n)
{  long bin;
	if(n!=0)
	{
	return (binary(n/2)*10+(n%2));
	}
	else
		return 0;
		
	}
int main()//main function
{ long ans;
	int n;
	printf("Enter a no:\n");
	scanf("%d",&n);
	ans=binary(n);

	printf("Binary equivalent is %ld:\n",ans);
		return 0;
}	
/*output:
All Amstrong nos. from 1 to 500 are:
1 153 370 371 407 
*/
