#include<stdio.h>
#define SIZE 100
struct student{int rollno;float gpa;char name[SIZE];};
int main()
{struct student s1[SIZE];
int n=0,i;

while(1)
{
 printf("Enter the details of the student %d:\n",n+1);
  
 	printf("Roll no=");
 	scanf("%d",&s1[n].rollno);

 	if(s1[n].rollno==0)
 		break;
 	printf("Name=");
 	scanf("%s",s1[n].name);
  	printf("GPA=");
 	scanf("%f",&s1[n].gpa); 
n++;
 
}
printf("The students with gpa greater than or equal to 8:\n");
printf("Sr no.\t Roll no \t Name\t GPA\t\n");
for(i=0;i<n;i++)
{
	if(s1[i].gpa>=8)
	printf("%d\t%d\t %s\t %f\n",i+1,s1[i].rollno,s1[i].name,s1[i].gpa);
}
return 0;
}
