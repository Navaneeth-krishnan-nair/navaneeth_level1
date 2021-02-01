//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b,v;
    printf("enter height,depth,breadth:");
    scanf("%f%f%f",&h,&d,&b);
    v=((h*d*b)+(d/b))/3;
    printf("volume of tromboloid is:%f",v);
    return 0;
}
