//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    return n;
}
int add(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void display(int n,int sum)
{
    printf("The sum of 1+2+3...%d+%d=%d",n-1,n,sum);
}
int main()
{
    int n,sum;
    n=input();
    sum=add(n);
    display(n,sum);
    return 0;
}
