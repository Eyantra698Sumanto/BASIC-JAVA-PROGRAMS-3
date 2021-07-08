#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct student{int rollno;float gpa;char batch[SIZE];};
int main()
{struct student s1[SIZE];
int n=0,i;
FILE *f;
f=fopen("text.txt","w+");
while(1)
{
 printf("Enter the details of the student %d:\n",n+1);
 printf("Roll no=");
 scanf("%d",&s1[n].rollno);
 	if(s1[n].rollno==0)
 		break;
  printf("GPA=");
 scanf("%f",&s1[n].gpa);
  printf("Batch=");
 scanf("%s",s1[n].batch);
n++;
 
}
fprintf(f,"Sr no.\t Roll no GPA\t\t Batch\n");
for(i=0;i<n;i++)
{fprintf(f,"%d\t %d\t %f\t %s\n",i+1,s1[i].rollno,s1[i].gpa,s1[i].batch);
}
fclose(f);

return 0;
}
