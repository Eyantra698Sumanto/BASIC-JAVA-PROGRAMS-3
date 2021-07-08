#include<stdio.h>
int main()
{	int no,ch,a,b,c;
printf("Enter the choice\n");
scanf("%d",&ch);
printf("Enter the numbers\n");
scanf("%d%d",&a,&b);
	switch(ch)
	{
	case 1:
	c=a+b;
	break;
	case 2:
	c=a-b;
	break;
	case 3:
	c=a*b;	
	break;	
	case 4:
	c=a/b;
	break;
	case 5:
	c=a%b;
	default:
	printf("Wrong Choice\n");
	return 0;

}
	printf("Answer=%d",c);
}
