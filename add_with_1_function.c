//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number1:");
    scanf("%f",&a);
    printf("enter a number2:");
    scanf("%f",&b);
    c=a+b;
    printf("the sum of %f and %f is %d",a,b,c);
    return 0;
}
