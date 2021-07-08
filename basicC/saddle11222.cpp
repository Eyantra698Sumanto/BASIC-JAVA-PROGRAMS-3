#include<stdio.h>
//#include<conio.h>
main()
{
int a[10][10],i,j,k,n,min,max,max1,min1,col,m,col1;
//clrscr();
printf("enter order m,n of mxn matrix : ");
scanf("%d %d",&m,&n);
printf("enter elements row-wise\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
min=a[i][0];min1=min;
for(j=0;j<n;j++)
{
if(a[i][j]<=min)
{
min=a[i][j];
col=j;
}
if(a[i][j]>=min1)
{
min1=a[i][j];
col1=j;
}
}
max=a[0][col];max1=a[0][col1];
for(k=0;k<m;k++)
{
if(a[k][col]>=max)
{
max=a[k][col]; 
}
if(a[k][col1]<=max1)
{
max1=a[k][col1]; 
}
}
if(max==min)
printf("saddle pt.at (%d,%d)\n",i+1,col+1);
else  if(max1==min1)
printf("saddle pt.at (%d,%d)",i+1,col1+1);
}
}
