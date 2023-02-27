// Q1. Write a C program to find maximum between two numbers using conditional operator.

#include <stdio.h>

int main(){
    int a,b,max;
    printf("The Values of a and b is:\n");
    scanf("%d%d",&a,&b);
    max = (a>b)? a:b;
    printf("The maximum value b/w a and b is: %d\n",max);
    return 0;
}