//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input1()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    return a;
}
int input2()
{
    int b;
    printf("enter a number:");
    scanf("%d",&b);
    return b;
}
int sum(int a,int b)
{
    int s;
    s=a+b;
    printf("sum of two numbers is:%d",s);
    return s;
}
int main()
{
    int n1,n2,n3;
    n1=input1();
    n2=input2();
    n3=sum(n1,n2);
    return 0;
}
