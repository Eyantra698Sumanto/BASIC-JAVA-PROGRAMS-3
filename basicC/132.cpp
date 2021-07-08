#include<stdio.h>
struct Marks{
	float P,C,M;
};
struct Studetails{
	char sname[100];
	int rno;
	Marks subject;
};
int main()
{ int i,n;float t=0;
Studetails s[100];
printf("Enter the no. of students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{fflush(stdin);
printf("Enter %d student details\n",i+1);
printf("Enter name\n");
scanf("%s",s[i].sname);
printf("Enter Roll no\n");
scanf("%d",&s[i].rno);
printf("Enter Physics marks\n");
scanf("%f",&s[i].subject.P);
printf("Enter Chem marks\n");
scanf("%f",&s[i].subject.C);
printf("Enter Maths marks\n");
scanf("%f",&s[i].subject.M);
}
printf("Name\tRoll No.\tTotal Marks\n");
for(i=0;i<n;i++)
{t=s[i].subject.P+s[i].subject.C+s[i].subject.M;
	printf("%s\t%d\t%f\n",s[i].sname,s[i].rno,t);
}
return 0;
}

