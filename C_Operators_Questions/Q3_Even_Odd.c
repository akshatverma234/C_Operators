//Q3. Write a C program to check whether a number is even or odd using conditional operator.

#include <stdio.h>

int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    (a%2==0)?printf("This is even number"):printf("This is odd number");
    return 0;
}