#include<stdio.h>
#include<string.h>
#define SIZE 100
struct Employee
{char name[SIZE];
 float salary;
 char EmployeeID[SIZE];
};
int main()
{	Employee list[10],t;
	int n,i,j;
	for(i=0;i<10;i++)
	{
		printf("Enter Employee %d details\n",i+1);
		printf("Employee ID:");
		fflush(stdin);
		scanf("%[^\n]",&list[i].EmployeeID);
		printf("Name:");
		fflush(stdin);
		scanf("%[^\n]",list[i].name);
		printf("Salary:");
		scanf("%f",&list[i].salary);
}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(list[j].salary<list[j+1].salary)
			{t=list[j];
			list[j]=list[j+1];
			list[j+1]=t;
			}
		}
	}
	printf("The list of employees sorted in descending order of salary:\n");
	printf("Employee ID\t Name \t Salary\n"); 	
	for(i=0;i<10;i++)
	printf("%s\t\t%s\t%f\n",list[i].EmployeeID,list[i].name,list[i].salary);
}
