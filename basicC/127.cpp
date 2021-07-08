#include<stdio.h>
#include<string.h>
main()
{char n[100];
FILE *ptr;
ptr=fopen("Sam.txt","wb");
if(ptr==NULL)
{
	printf("Error!");
	return 0;
}
printf("Enter n\n");
scanf("%s",&n);
fwrite(n,5,strlen(n),ptr);
fclose(ptr);
return 0;
}
