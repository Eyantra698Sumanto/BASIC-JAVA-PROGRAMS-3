#include<stdio.h>
int main()
{	int  marks;
printf("Enter the marks\n");
scanf("%d",&marks);
	switch(marks/10)
	{
		case 0:
		case 1:
		case 2:
		case 3:
				printf("Fail\n");
				break;
		case 4:
			printf("Pass\n");
		break;
		case 5:
			printf("Second Class\n");
		break;
		case 6:
				printf("First Class\n");
		case 7:
			case 8:
		case 9:
					printf("Distinction\n");
	default:
	printf("Invalid Marks\n");
}



}
