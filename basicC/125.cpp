#include<stdio.h>
main()
{char n[100];
FILE *ptr;
ptr=fopen("Ram.txt","w");
if(ptr==NULL)
{
	printf("Error!");
	return 0;
}
printf("Enter n\n");
scanf("%[^\n]",&n);
fprintf(ptr,"%s",n);
fclose(ptr);
return 0;
}
