// Q2. Write a C program to find maximum between three numbers using conditional operator.

#include <stdio.h>

int main(){
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    printf("The Values of a and b is:\n");
    max = (a>b)?((a>c)?a:c):(b>c)?b:c;
    printf("The maximum value b/w a,b and c is: %d\n",max);
    return 0;
}