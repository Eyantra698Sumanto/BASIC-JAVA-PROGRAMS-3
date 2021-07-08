#include<stdio.h>
#include<string.h>
#define SIZE 100
struct Employee
{
	int ecode;
	char name[SIZE];
	char design[21];
	float salary;
};
int main()
{	
	int n,i,pass;
	struct Employee emp[SIZE],t;
	printf("Enter no of employees\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
 	 	printf("enter the employee %d details:\n",i+1);
	 	printf("Enter the employee code:\n");
		scanf("%d",&emp[i].ecode);
	 	printf("Enter the name:\n");
		scanf("%s",emp[i].name);
		printf("Enter the designation:\n");
		scanf("%s",emp[i].design);
		printf("Enter the salary\n");
		scanf("%f",&emp[i].salary);
	}	
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(emp[i].salary<emp[i+1].salary)
		 	{t=emp[i];
		 	emp[i]=emp[i+1];
		 	emp[i+1]=t;
			}
		}
	}
	printf("Employees in the descending order of salary:\n");
	printf("Employee code Employee name  Designation \tSalary\n");
	for(i=0;i<n;i++)
		printf("%d\t\t%s\t\t%s\t\t%f\n",emp[i].ecode,emp[i].name,emp[i].design,emp[i].salary);

	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(emp[i].design,"Manager")==0)
		 	{t=emp[i];
		 	emp[i]=emp[i+1];
		 	emp[i+1]=t;
			}
		}
	}  
	printf("Employees in the ascending order of designation:\n");
	printf("Employee code Employee name  Designation \tSalary\n");
	for(i=0;i<n;i++)
		printf("%d\t\t%s\t\t%s\t\t%f\n",emp[i].ecode,emp[i].name,emp[i].design,emp[i].salary);
}
/*output:
Enter no of employees
3
enter the employee 1 details:
Enter the employee code:
100
Enter the name:
Yodhu
Enter the designation:
Emp
Enter the salary
20000
enter the employee 2 details:
Enter the employee code:
200
Enter the name:
Modhu
Enter the designation:
Emp
Enter the salary
30000
enter the employee 3 details:
Enter the employee code:
300
Enter the name:
Akash
Enter the designation:
Manager
Enter the salary
50000
Employees in the descending order of salary:
Employee code Employee name  Designation        Salary
300             Akash           Manager         50000.000000
200             Modhu           Emp             30000.000000
100             Yodhu           Emp             20000.000000
Employees in the ascending order of designation:
Employee code Employee name  Designation        Salary
200             Modhu           Emp             30000.000000
100             Yodhu           Emp             20000.000000
300             Akash           Manager         50000.000000

*/                 
