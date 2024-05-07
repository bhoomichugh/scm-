#include<stdio.h>
int main() {
    int quantity , discount;
    float rate , total;
    printf("enter quantity ");
    printf("enter rate ");
    scanf("%d ", &quantity);
    scanf("%f ", &rate);

    if(quantity > 1000)
       discount = 10;

       total = (quantity * rate) - (quantity * rate * discount /100);
       printf("total expenses = rs. %f", total);

       return 0;

}