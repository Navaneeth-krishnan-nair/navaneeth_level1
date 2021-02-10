//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int input()
{
    float a;
    scanf("%f",&a);
    return a;
}
float calculate_distance(float a1,float b1,float a2,float b2)
{
    float dist;
    dist=sqrt((b2-b1)*(b2-b1)+(a2-a1)*(a2-a1));
    return dist;
}
float display(float dist)
{
    printf("The distance between two points is:%f",dist);
    return dist;
}
int main()
{
    float a1,b1,a2,b2,x,dist;
    printf("enter a1:");
    a1=input();
    printf("enter b1:");
    b1=input();
    printf("enter a2:");
    a2=input();
    printf("enter b2:");
    b2=input();
    dist=calculate_distance(a1,b1,a2,b2);
    display(dist);
    return 0;
}
