#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct Hockey
{char name[SIZE];
 char country[SIZE];
 int n;
 int goal;
};
int main()
{	Hockey *list;
	int n,i;
	printf("Enter number of players\n");
	scanf("%d",&n);
	list=(Hockey*)malloc(n*sizeof(Hockey));
	for(i=0;i<n;i++)
	{
		printf("Enter player %d details\n",i+1);
		printf("Name:");
		scanf("%s",list[i].name);
		printf("Country:");
		scanf("%s",list[i].country);
		printf("No. of Matches:");
		scanf("%d",&list[i].n);
		printf("No. of goals:");
		scanf("%d",&list[i].goal);
	}
	printf("Name/t Country/t Matches Played Goals\n");
	for(i=0;i<n;i++)
	printf("%s\t%s\t%d\t%d\t\n",list[i].name,list[i].country,list[i].n,list[i].goal);
	
}
