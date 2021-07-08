#include<stdio.h>
int main()
{
int a[100][100],t,i,j,m,n,l,u;
printf("Enter the order");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
for(i=0;i<n;i++)
{
	if(m<n)
	{l=0;
	 u=i;
	}
	else
	{l=i;
	u=m;
	}
for(j=l;j<u;j++)
{

printf("%d %d h\n",a[i][j],a[j][i]);
t=a[j][i];
a[j][i]=a[i][j];
a[i][j]=t;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d ",a[i][j]);
printf("\n");
}}
