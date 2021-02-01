//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number1:");
    scanf("%d",&a);
    printf("enter number2:");
    scanf("%d",&b);
    c=sum1(a,b);
    printf("sum of %d and %d is %d",a,b,c);
    return 0;
}
int sum1(int a,int b)
{
    int sum2;
    sum2=a+b;
    return sum2;
}
