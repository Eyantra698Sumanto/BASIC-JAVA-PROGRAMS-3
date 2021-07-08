#include<stdio.h>
int main()
{
int first, last, middle, n, i, ele, list[100], pos = -1;
//pos is set to -1, its assumption element is not in list
printf("Enter the size of the list: ");
scanf("%d",&n);
printf("Enter %d integer values in Assending order\n", n);
for (i = 0; i < n; i++)
scanf("%d",&list[i]);
printf("Enter value to be search: ");
scanf("%d", &ele);
first = 0;
last = n-1;
while (first <= last)
{
middle = (first+last)/2; //calculate middle index
if (list[middle] == ele) //compare middle element with element to be searched.
{
pos = middle; //if matches then record element’s index position
break;
}
else if(ele < list[middle]) //if ele is smaller than middle element then it might present in left half of array
{
last = middle-1;
}
else //if ele is grater than middle element then it might present is right half of array
{
first = middle+1;
}
}
if(pos == -1)
printf("%d is not present in array",ele);
else
printf("%d is present at %d location",ele,pos+1);
return 0;
}
/*#include<stdio.h>
int main()
{
int first, last, middle, n, i, ele, list[100], pos = -1;
//pos is set to -1, its assumption element is not in list
printf("Enter the size of the list: ");
scanf("%d",&n);
printf("Enter %d integer values in Descending order\n", n);
for (i = 0; i < n; i++)
scanf("%d",&list[i]);
printf("Enter value to be search: ");
scanf("%d", &ele);
first = 0;
last = n-1;
while (first <= last)
{
middle = (first+last)/2; //calculate middle index
if (list[middle] == ele) //compare middle element with element to be searched.
{
pos = middle; //if matches then record element’s index position
break;
}
else if(ele>list[middle]) //if ele is smaller than middle element then it might present in left half of array
{
last = middle-1;
}
else //if ele is grater than middle element then it might present is right half of array
{
first = middle+1;
}
}
if(pos == -1)
printf("%d is not present in array",ele);
else
printf("%d is present at %d location",ele,pos+1);
return 0;
}*/
