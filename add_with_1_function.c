//Write a program to add two user input numbers using one function.
#include<stdio.h>
#include<stdio.h>
int input()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    return a;
}
int main()
{
    int x,y,z;
    x=input();
    y=input();
    z=x+y;
    printf("the sum of %d and %d is %d",x,y,z);
    return 0;
}
