#include<stdio.h>
#define SIZE 100
struct CourseRec{int credit;int no;char scode[6],title[50];};
int main()
{ CourseRec subj[5];int i;
printf("Enter the subject elements:\n");
for(i=0;i<5;i++)
{printf("Code=");
scanf("%s",subj[i].scode);
printf("No. of Students=");
scanf("%d",&subj[i].no);
subj[i].credit=4;
printf("Title=");
scanf("%s",subj[i].title);
}
printf("The students with gpa greater than or equal to 8:\n");
printf("Code\t Title\t \t Credit\t No of students\n");
for(i=0;i<5;i++)
	printf("%s\t %s\t %d\t %d\n",subj[i].scode,subj[i].title,subj[i].credit,subj[i].no);
return 0;
}
