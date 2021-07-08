#include<stdio.h>
int main()
{
int first, last, middle, n, i, ele, list[100], pos = -1;
//pos is set to -1, its assumption element is not in list
printf("Enter the size of the list: ");
scanf("%d",&n);
printf("Enter %d integer values \n", n);
for (i = 0; i < n; i++)
scanf("%d",&list[i]);
printf("Enter value to be search: ");
scanf("%d", &ele);
for(i=0;i<n;i++)
{if(list[i]==ele)
   {
   	list[i]=ele;
	pos=i;
   }
}

if(pos == -1)
printf("%d is not present in array",ele);
else
printf("%d is present at %d location",ele,pos+1);
return 0;
}
