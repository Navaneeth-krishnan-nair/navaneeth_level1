//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()

{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    return n;
}
void inp_arr(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&a[i]);
    }
}
int add(int n,int a[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void display(int n,int sum,int a[])
{
    printf("Sum of ");
    for(int i=0;i<n;i++)
        printf(" %d +",a[i]);
    printf(" is %d",sum);
}
int main()
{
    int n,sum;
    n=input();
    int a[n];
    inp_arr(n,a);
    sum=add(n,a);
    display(n,sum,a);
    return 0;
}
