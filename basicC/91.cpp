#include<stdio.h>
#include<conio.h>

int main()
{	int no,ch,a,b;char c;
printf("Enter the operation\n");
scanf("%d",&a);

ch=getch();
scanf("%d",&b);
	switch(ch)
	{
	case '+':
	c=a+b;
	break;
	case '-':
	c=a-b;
	break;
	case '*':
	c=a*b;	
	break;	
	case '/':
	c=a/b;
	break;
	case '%':
	c=a%b;
	default:
	printf("Wrong Choice\n");
	return 0;

}
	printf("Answer=%d",c);
}
