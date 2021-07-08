#include<stdio.h>
int main()
{	int i,j,n,f=1;
printf("Enter a no\n");
scanf("%d",&n);
	for(i=2;i<n;i++)
	{	    
		if(n%i==0)
		{f=0;
		break;
	}
	 }
	if(f==1)
	printf("Prime");
	else printf("Not Prime");
}
