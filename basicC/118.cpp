#include<stdio.h>
void num(int no)
{if(no==0)
	printf("Zero ");
	else if(no==1)
	printf("One ");
	else if(no==2)
	printf("Two ");
	else if(no==3)
	printf("Three ");
	else if(no==4)
	printf("Four ");
	else if(no==5)
	printf("Five ");
	else if(no==6)
	printf("Six ");
	else if(no==7)
	printf("Seven ");
	else if(no==8)
	printf("Eight ");
	else
	printf("Nine ");

}

int main()
{	int no,d,s;
printf("Enter the number\n");
scanf("%d",&no);

while(no>0)
{d=no%10;
s=s*10+d;
no/=10;
}
while(s>0)
{
	num(s%10);
	s/=10;
	}	}
