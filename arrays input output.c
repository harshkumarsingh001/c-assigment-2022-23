//arrays input output
#include<stdio.h>
int main()
{
    int marks[3];
    printf("phy:");
    scanf("%d",&marks[0]);

    printf("maths:");
    scanf("%d",&marks[1]);

    printf("chem:");
    scanf("%d",&marks[2]);
 printf("phy=%d,maths=%d,chem=%d",marks[0],marks[1],marks[2]);
    return 0 ;
}