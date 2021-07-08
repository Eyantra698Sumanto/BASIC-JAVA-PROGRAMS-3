#include<stdio.h>
#include<conio.h>

int main()
{	int no,ch,a,b;char c;
printf("Enter the choice\n");
ch=getche();
printf("\nEnter the numbers\n");
scanf("%d%d",&a,&b);
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
