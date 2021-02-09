//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int input()
{
    float a;
    printf("enter points (a1,b1) and points (a2,b2):");
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
    a1=input();
    b1=input();
    a2=input();
    b2=input();
    dist=calculate_distance(a1,b1,a2,b2);
    display(dist);
    return 0;
}

