#include<stdio.h>
#define SIZE 100

int main()
{int flag=1,i,l;
 char a[SIZE],b[SIZE];
 printf("Enter a string\n");
 scanf("%[^\n]",a);
 l=strlen(a);
 strcpy(b,a);
 for(i=0;i<l;i++)
 {if(a[i]>='A'&&a[i]<='Z')
   a[i]=a[i]+32;
 }
 	
 for(i=0;i<l/2;i++)
 	if(a[i]!=a[l-i-1])
 	{flag=0;
 	 break;
	 }
if(flag==1)
printf("The string %s is palindrome\n",b);
else
printf("The string %s is not palindrome\n",b);
}
