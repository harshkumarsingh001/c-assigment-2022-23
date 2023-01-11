//write a c program to enter length and breadth of a rectangle and find perimeter
#include<stdio.h>
int main()
{
int lenght;
printf("enter length");
scanf("%d",&lenght);
int breadth;
printf("enter breadth");
scanf("%d",&breadth);
printf("perimeter is %d",2*(lenght+breadth));
return 0;
}