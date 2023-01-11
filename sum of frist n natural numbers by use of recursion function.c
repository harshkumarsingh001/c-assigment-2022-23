//sum of frist n natural numbers by use of recursion function
#include<stdio.h>
int sum(int n);

int main()
{
    printf("enter the number:");
    scanf("%d",&sum(n)) ;
    printf("%d",sum(n))   
return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumnm1=sum(n-1) ; 
 int sumn=sumnm1 +n;
 return sumn;
 }