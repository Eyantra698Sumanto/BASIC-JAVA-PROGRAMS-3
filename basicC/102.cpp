#include<stdio.h>
int main()
{float r,u;
printf("Enter the no. of units\n");
scanf("%f",&u);
if(u<=200)
r=0.5*u;
else if(u<=400)
r=100+0.65*(u-200);
else if(u<=600)
r=230+0.85*(u-400);
else
r=390+1*(u-600);
printf("total bill=%f",r);
}
