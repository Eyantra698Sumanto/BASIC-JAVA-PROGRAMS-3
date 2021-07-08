#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	FILE *fptr;int i;
	fptr=fopen("Ram.txt","r");
	while(!feof(fptr))
		fscanf(fptr,"%c",&s[i++]);
	for(i=0;i<strlen(s);i++)
	{if(isalpha(s[i]))
		if(islower(s[i]))
		s[i]=toupper(s[i]);
		else if(isupper(s[i]))
		s[i]=tolower(s[i]);
	}
	fptr=fopen("Sam.txt","w");
		fprintf(fptr,"%s",s);
}
