#include<stdio.h>
#include<string.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	int vowel=0,special=0,digit=0,conso=0,space=0,i;
	printf("Enter a string\n");
	scanf("%[^\n]",str);
	for(i=0;i<strlen(str);i++)
	{	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
		{
		  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vowel++;
		  else
			conso++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		digit++;
		else if(str[i]==' ')
		space++;
		else
		special++;
	
	}
	printf("No. of vowels=%d\n",vowel);
	printf("No. of consonants=%d\n",conso);
	printf("No. of digits=%d\n",digit);
	printf("No. of spaces=%d\n",space);
	printf("No. of special characters=%d\n",special);
}
