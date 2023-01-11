//area of square circle rectangle by use of function
#include<stdio.h>
float squarearea(float side);
float circlearea(float radius);
float rectangle(float a,float b);
int main()
{
    float side;
    printf("enter the side:\n");
    scanf("%f",&side);
    printf("%f\n",squarearea(side));
        float radius;
printf("enter the radius :\n");
scanf("%f",&radius);
printf("%f\n",circlearea(radius));
float a;float b;
    printf("enter the side:\n");
    scanf("%f%f",&a,&b);
    printf("%f",rectangle(a,b));
    return 0;
}
float squarearea(float side)
{
    return side*side;
}
float circlearea(float radius)
{
    return 3.14*radius*radius;
}
float rectangle(float c,float d)
{
    return c*d;
}