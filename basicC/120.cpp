#include<stdio.h>
#include<math.h>
float mean(float a[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	s+=a[i];
	return(s/n);
}
float sd(float a[],int n)
{	float s,v=0;int i;
	for(i=0;i<n;i++)
	{
	v+=pow(a[i]-mean(a,n),2);
}
	s=sqrt(v/n);
	return s;
}

int main()
{int n;float a[1000];
printf("Enter the number\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(int i=0;i<n;i++)
	scanf("%f",&a[i]);
printf("S.D.=%f",sd(a,n));
}

