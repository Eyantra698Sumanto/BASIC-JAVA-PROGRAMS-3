#include<stdio.h>
#include<math.h>
int main()
{
	long double a=1.0,b=1.0/sqrt(2),t=1.0/4,p=1.0,a1,t2,t3,t4;
	 double pi=0;long n,i;
	scanf("%ld",&n);
	for(i=0;i<=n;i++)
	{	  
		/*a1=a;
		a=(a+b)/2;
		b=sqrt(a1*b);
		t=t-p*(a1-a)*(a1-a);
		p=2*p;
	}
	pi=((a+b)*(a+b))/(4*t);*/
	t=4.0/(8*i+1);
	t2=2.0/(8*i+4);
		t3=1.0/(8*i+5);
		t4=1.0/(8*i+6);
	pi+=(t-t2-t3-t4)/pow(16,i);
}

	
		
	printf("%0.16lf",pi);


}
