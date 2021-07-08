#include<stdio.h>
main()
{
int can[5]={0};
int i,n,ballot,spoil=0;
printf("Enter the number of ballot paper\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %dth ballot paper:",i+1);
scanf("%d",&ballot);
if(ballot>=1 && ballot<=5)
can[ballot-1]++;
else 
spoil++;
}
for(i=0;i<5;i++)
{
	printf("Vote of %dth participant=%d\n",i+1,can[i]);
}
printf("No.of spoiled votes=%d",spoil);
}
