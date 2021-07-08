#include<stdio.h>
#include<string.h>
#define SIZE 100
#include<stdlib.h>
struct Student
{char name[SIZE];
 float marks[3];
 float avg_marks;
 char Roll_No[SIZE];
 
};
int main()
{	Student *list,t;
	int n,i,j,s;
	printf("Enter number of Students\n");
	scanf("%d",&n);
	list=(Student*)malloc(n*sizeof(Student));
	for(i=0;i<n;i++)
	{
		printf("Enter Student %d details\n",i+1);
		printf("Roll No:");
		fflush(stdin);
		scanf("%[^\n]",&list[i].Roll_No);
		printf("Name:");
		fflush(stdin);
		scanf("%[^\n]",list[i].name);
		s=0;
		for(j=0;j<3;j++)
		{printf("Enter  subject %d marks:",j+1);
		scanf("%f",&list[i].marks[j]);
		s+=list[i].marks[j];
		}
		list[i].avg_marks=s/3;
}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(list[j].avg_marks>list[j+1].avg_marks)
			{t=list[j];
			list[j]=list[j+1];
			list[j+1]=t;
			}
		}
	}
	printf("The list of Students sorted in descending order of marks:\n");
	printf("Roll No\t Name \t Average marks\n"); 	
	for(i=0;i<n;i++)
	printf("%s\t%s\t%f\n",list[i].Roll_No,list[i].name,list[i].avg_marks);
}
