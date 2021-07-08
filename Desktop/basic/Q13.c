#include<stdio.h>
#include<string.h>
int xstrlen(char *p)
{  static int len;
	if(*p=='\0')
	return len;	
	len++;
	return(xstrlen(++p));
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
	while(*p2!='\0')
	{*p=*p2;
	p2++;p++;
	}*p='\0';
}
void xstrcat(char *p,char*p2)
{ 	
	while(*p!='\0')
	 p++;
	while(*p2!='\0')
	{*p=*p2;
	 p2++;
	 p++;
	}*p='\0';
}
void xstrev(char a[])
{  int i,l=xstrlen(a);
   char t;

	for(i=0;i<l/2;i++)
	{t=a[i];
	a[i]=a[l-1-i];
	a[l-1-i]=t;
	}
}
int main()
{  	char str[100],str2[100];
	int cmp,ch;
	printf("Enter the choice:\n1.length\n2.compare\n3.copy\n4.concat\n5.reverse\n");
	scanf("%d",&ch);
	fflush(stdin);
	printf("Enter a string\n");
	scanf("%[^\n]",str);
	fflush(stdin);
	switch(ch)
	{
	case 1:
	printf("The length of the first string is %d\n",xstrlen(str));
	break;
	case 2:
	printf("Enter second string\n");
	scanf("%[^\n]",str2);
	cmp=xstrcmp(str,str2);
	if (cmp==0)
	printf("Both strings are same\n");
	else if(cmp>0)
	printf("string1  is greater than string2 by %d\n",cmp);
	else
	printf("string2  is greater than string1 by %d\n",-cmp);
	break;
	case 3:
	xstrcpy(str2,str);
	printf("The first string is copied in second string.\nString1= %s\nString2=%s\n",str,str2);
	break;
	case 4:
	printf("Enter second string\n");
	scanf("%[^\n]",str2);
	xstrcat(str,str2);
	printf("The concatenated string=%s",str);
	break;
	case 5:
	xstrev(str);
	printf("The reversed string=%s",str);
	break;
	default:
	printf("WRONG CHOICE");
}
	return 0;
}

