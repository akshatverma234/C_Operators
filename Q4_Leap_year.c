//Q4. Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>

int main(){
    int leap_year;
    printf("Enter the year you want to check for:\n");
    scanf("%d",&leap_year);
    (leap_year%4==0 && leap_year%100!=0)?printf("This is leap year"):
        (leap_year%400==0)?printf("This is leap year"):printf("This is not a leap year");
    return 0;
}