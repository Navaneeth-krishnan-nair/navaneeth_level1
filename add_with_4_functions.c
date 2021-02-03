//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input1()
{
    int a,b;
    printf("enter a number:");
    scanf("%d",&a);
    return a;
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    return s;
}
int output(int a,int b,int s)
{
    int result;
    printf("the sum of %d and %d is %d",a,b,s);
    return result;
}
int main()
{
    int n1,n2,n3;
    n1=input1();
    n2=input1();
    n3=sum(n1,n2);
    output(n1,n2,n3);
    return 0;
}
