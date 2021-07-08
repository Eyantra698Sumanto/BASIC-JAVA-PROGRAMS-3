#include<stdio.h>
#include<string.h>
#define SIZE 100
struct Patient
{char name[SIZE];
 char disease[SIZE];
 char patientID[SIZE];
};
int main()
{	Patient list[5];
	int n,i;
	for(i=0;i<5;i++)
	{
		printf("Enter patient %d details\n",i+1);
		printf("Patient ID:");
		fflush(stdin);
		scanf("%[^\n]",&list[i].patientID);
		printf("Name:");
		fflush(stdin);
		scanf("%[^\n]",list[i].name);
		printf("Disease:");
		fflush(stdin);
		scanf("%[^\n]",list[i].disease);
}
	printf("The patients having diabetes are:\n");
	printf("Patient ID\t Name\n"); 
	fflush(stdin);
	for(i=0;i<5;i++)
	if(strcmp(list[i].disease,"Diabetes")==0)
	printf("%s\t\t%s\n",list[i].patientID,list[i].name);
	
	
}
