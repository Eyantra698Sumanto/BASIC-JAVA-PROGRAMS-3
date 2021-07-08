#include<stdio.h>
#include<math.h>
struct point
{
	float x;
	float y;
};
float dist(point p1,point p2)
{ float d;

	d=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
	return d;
}
int main()
{	
	point p1,p2;
	printf("Enter the x and y coordinate of the first point\n");
	scanf("%f%f",&p1.x,&p1.y);
	fflush(stdin);
	printf("Enter the x and y coordinate of the second point\n");
	scanf("%f%f",&p2.x,&p2.y);
	printf("Distance=%f",dist(p1,p2));
}

	
	
	

