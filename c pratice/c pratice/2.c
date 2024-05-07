#include<stdio.h>

int main() {
    float sub1 , sub2 , sub3 , sub4 , sub5 , total_marks , percentage;
    printf("enter the marks of sub1:");
    scanf("%f", &sub1);
    printf("enter the marks of sub2:");
    scanf("%f", &sub2);
    printf("enter the marks of sub3:");
    scanf("%f", &sub3);
    printf("enter the marks of sub4:");
    scanf("%f", &sub4);
    printf("enter the marks of sub5:");
    scanf("%f", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total_marks / 500) *100;

    printf("aggreate marks is : %f", total_marks);
    printf("percentage is : %f", percentage);

    return 0 ;
    
}