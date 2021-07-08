#include<stdio.h>
main()
{double x=20,y,*ip;
ip=&x;
y=(*ip)++;
printf("%Lf\n",y);
printf("%Lf\n",*ip);
y=++(*ip);
printf("%Lf\n",y);
printf("%Lf\n",*ip);
}

