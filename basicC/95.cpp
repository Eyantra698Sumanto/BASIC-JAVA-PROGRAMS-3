#include<stdio.h>
int main()
{	int i,x,s=0;


for(i=1;i<=10;i++)
{printf("Enter the 2 digit number\n");
 scanf("%d",&x);
 if(x/100!=0)
 break;
 s+=x;
 

}
printf("Sum=%d",s);
}
