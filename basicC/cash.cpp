#include<stdio.h>
void notes(int *n,int *p1)
{int d=*n/ *p1;
*n=*n% *p1;
*p1=d;
}
int main()
{int n,r1=1, r2=2,r5=5,r10=10,r50=50,r100=100;
printf("Enter the amount\n");
scanf("%d",&n);
notes(&n,&r100);
notes(&n,&r50);
notes(&n,&r10);
notes(&n,&r5);
notes(&n,&r2);
notes(&n,&r1);
printf("The smallest number of notes that will combine to give amount  are :");
printf("\nRs1=%d \nRs2=%d \nRs5=%d \nRs10=%d \nRs50=%d \nRs100=%d \n",r1,r2,r5,r10,r50,r100);
return 0;
}
