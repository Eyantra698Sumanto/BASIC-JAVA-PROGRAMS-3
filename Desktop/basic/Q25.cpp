#include<stdio.h>
#include<stdlib.h>

#include<math.h>
float find_mean(float x[],int n)
{int i;
float s=0;
for(i=0;i<n;i++)
s+=x[i];
return(s/n);
}
float find_variance(float x[],int n)
{int i;
float s=0,xbar=find_mean(x,n);
for(i=0;i<n;i++)
s+=pow(x[i]-xbar,2);
return (s/n);
}
int main()
{float *a;
int n,i;
printf("Enter the value of n\n");
scanf("%d",&n);
a=(float*)malloc(n*sizeof(float));
printf("Enter the numbers\n");
for(i=0;i<n;i++)
scanf("%f",&a[i]);
printf("Mean=%f\n",find_mean(a,n));
printf("Standard deviation=%f",sqrt(find_variance(a,n)));
}
