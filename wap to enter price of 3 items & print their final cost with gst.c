//wap to enter price of 3 items & print their final cost with gst
#include<stdio.h>
int main()
{
    float price[3];
    printf("price of 3 itmes:");
    scanf("%f",&price[0]);

    scanf("%f",&price[1]);

    scanf("%f",&price[2]);
 printf("\ntotal price 1-:%f",price[0]+(0.18*price[0]));
 printf("\ntotal price 2-:%f",price[1]+(0.18*price[1]));
 printf("\ntotal price 3-:%f",price[2]+(0.18*price[2]));
    return 0 ;
}