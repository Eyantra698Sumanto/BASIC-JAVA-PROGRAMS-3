#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

# define SIZE 81
int main()
{
char str[SIZE],ch;
int i,len=0;
printf("\n Enter a string maximum of length %d",SIZE-1); /* Ask user to enter sting*/
scanf("%s",str);
/*do
{getchar(ch); /* get one character at a time */
//str[len]=ch; /* store the character in an array */
//len++; /* increment the counter */
//}while (ch != '\n'); 
/* scan untill enter key is hit */
//str[len] = '\0'; /* append null character at the end of the string */
len=strlen(str);
for (i=0 ; i<len/2; i++)
{
/* swap the characters*/
ch = str[i];
str[i] = str[len-1-i];
str[len-1-i] =ch;
}
/* print the reverse string*/
printf("\nThe reverse string is :\n");
printf("%s", str);
}
