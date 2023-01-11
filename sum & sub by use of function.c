//sum & sub by use of function
#include<stdio.h>
void sum(int,int);
void sub(int,int);
int main()
{
    int a,b,e,f;
printf("enter 2 value:");
scanf("%d%d",&a,&b);
 sum(a,b);

printf("Enter the value:");
scanf("%d%d",&e,&f);
 sub(e,f);

return 0;
}
void sum(int a,int b)
{
int c=a+b;
printf("%d\n",c);
}
void sub(int e,int f)
{
int g=e-f;
printf("%d",g);
}