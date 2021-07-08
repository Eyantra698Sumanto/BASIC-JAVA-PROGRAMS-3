#include<stdio.h>
#include<string.h>
#define SIZE 10000

int main()
{	char s[SIZE];
    long int t,n,i=0,j,y=1,x=0,tem,k=1;
  printf("Enter the value of T such that T is between 1 and 20");
    scanf("%ld",&t);
     if(t<1||t>20)
     {
	 printf("Value of T is wrong");
    return(0);
	}
	while(k<=t)
	{
    printf("Enter the  value of N such that N is between 1 and 100000");
    scanf("%ld",&n);
    if(n<1||n>100000)
     {
	 printf("Value of N is wrong");
    return(0);
	}
   	printf("Enter a String");
   	fflush(stdin);
    scanf("%[^\n]",&s);

	n=strlen(s);
	
	for(i=0;i<n-1;i++)
    { 	for(j=i+1;j<n;j++)
    	{
    		if(s[i]<s[j])
    		x++;
		}
   }
   for(i=1;i<n;i++)
     y*=i;
   printf("Output:%ld",x);}}
