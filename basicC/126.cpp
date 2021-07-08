#include<stdio.h>
main()
{int n;
FILE *ptr;
ptr=fopen("Ram.txt","r");
if(ptr==NULL)
{
	printf("Error!");
	return 0;
}

fscanf(ptr,"%d",&n);

printf(" n=%d\n",n);
fclose(ptr);
return 0;
}
