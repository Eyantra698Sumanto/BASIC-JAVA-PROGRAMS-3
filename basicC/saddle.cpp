#include<stdio.h>
int  main()
{
	int a[100][100],i,j,n,m,minr[100],maxr[100],minc[100],maxc[100],s[100];
	printf("Enter the  order of matrix:\n");
	scanf("%d%d",&n,&m);
	printf("Enter the  elements:\n");
	for( i=0;i<n;i++)
		for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	for( i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	printf("%d  ",a[i][j]);
	printf("\n");
}		

	for(i=0;i<n;i++)
	{ maxc[i]=a[i][0];
	  minc[i]=a[i][0];
		for(j=1;j<m;j++)
		{ if(a[i][j]>maxc[i])
		   maxc[i]=a[i][j];
		  if(a[i][j]<minc[i])
		   minc[i]=a[i][j];
	}
	}
	for(i=0;i<m;i++)
	{ maxr[i]=a[0][i];
	  minr[i]=a[0][i];
		for(j=1;j<n;j++)
		{ if(a[j][i]>maxr[i])
		   maxr[i]=a[j][i];
		  if(a[j][i]<minr[i])
		   minr[i]=a[j][i];
	}
	}
	printf("The minimax are:\n");
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{if(maxr[j]==minc[i])
	  printf("a[%d][%d]=%d ",i+1,j+1,maxr[j]);
	  else if(minr[j]==maxc[i])
	  printf("a[%d][%d]=%d ",i+1,j+1,maxc[i]);
	}
}}
