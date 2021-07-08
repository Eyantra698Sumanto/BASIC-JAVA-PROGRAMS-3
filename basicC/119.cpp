#include<stdio.h>
int reve(int n)
{static int r,s=0;
	if(n==0)
	return 0;
	r=n%10;
 s=s*10+r;
reve(n/10);
return s;

}
int main()
{int n;
printf("Enter the number\n");
scanf("%d",&n);
printf("Reverse=%d",reve(n));
}

