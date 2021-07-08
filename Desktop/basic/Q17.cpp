#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
struct Date
{
	int d;
	int m;
	int y;
};
struct Employee
{char name[SIZE];
 float salary;
 char EmployeeID[SIZE];
 Date dob;
};
int main()
{	Employee *list;
	int n,i,j;
	printf("Enter number of employees\n");
	scanf("%d",&n);
	list=(Employee*)malloc(n*sizeof(Employee));
	for(i=0;i<n;i++)
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
		printf("Date of joining:");
		printf("Day:");
		scanf("%d",&list[i].dob.d);
		printf("Month:");
		scanf("%d",&list[i].dob.m);
		printf("Year:");
		scanf("%d",&list[i].dob.y);
}
	printf("The list of employees sorted in descending order of salary:\n");
	printf("Employee ID\t Name \t Salary\t\t Date of joining\n"); 	
	for(i=0;i<n;i++)
	printf("%s\t\t%s\t%f\t%d/%d/%d\n",list[i].EmployeeID,list[i].name,list[i].salary,list[i].dob.d,list[i].dob.m,list[i].dob.y);
}
