#include<stdio.h>
int main()
{char ch;
float a,b,calc;
printf("Enter 2 nos. \n");
scanf("%f%f",&a,&b);
printf("Enter choice:\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\nm for modulus\n");
scanf(" %c",&ch);
switch(ch)
{
case '+':
calc=a+b;
break;
case '-':
calc=a-b;
break;
case '*':
calc=a*b;
break;
case '/':
calc=a/b;
break;
case 'm':
calc=((int)a)%((int)b);
break;
default:
printf("WRONG CHOICE");

}
printf("Answer=%f\n",calc);
}
*/Output:
Enter 2 nos.
3
7
Enter choice:
+ for addition
- for subtraction
* for multiplication
/ for division
m for modulus
+
Answer=10.000000
*/
