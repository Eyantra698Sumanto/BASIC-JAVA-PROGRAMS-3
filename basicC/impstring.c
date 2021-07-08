#include<stdio.h>
#include<string.h>
int xstrlen(char *p,int len)
{ 
	if(*p=='\0')
	return len;	
	return(xstrlen(++p,++len));
}
int xstrcmp(char *p1,char *p2)
{ 
	while(*p1!='\0'||*p2!='\0')
	{
			if (*p1!=*p2)
		return *p1-*p2;
		p1++;
		p2++;
	}
	return 0;
}
void xstrcpy(char *p,char*p2)
{ 
	while(*p!='\0')
	{*p2=*p;
	p2++;p++;
	}*p2='\0';
}
int main()
{  	char str[100],str2[100];int cmp;
	printf("Enter first string\n");
	scanf("%[^\n]s",str);
	printf("Enter second string\n");
	scanf("%s",str2);
	printf("The length of the first string is %d and the second string is %d\n",xstrlen(str,0),xstrlen(str2,0));
	printf("String1= %s\n String2=%s\n",str,str2);
	cmp=xstrcmp(str,str2);
	if (cmp==0)
	printf("Both strings are same\n");
	else if(cmp>0)
	printf("string1  is greater than string2 by %d\n",cmp);
	else
	printf("string2  is greater than string1 by %d\n",-cmp);
	xstrcpy(str,str2);
	printf("The first string is copied in second string.\nString1= %s\n String2=%s\n",str,str2);
	return 0;
}
/*output:
Enter first string
Ram
Enter second string
Sam
The length of the first string is 3 and the second string is 3
String1= Ram
 String2=Sam
string2  is greater than string1 by 1
The first string is copied in second string.
String1= Ram
 String2=Ram
*/
