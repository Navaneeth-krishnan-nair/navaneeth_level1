//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input_values();
float calculate_distance(float a1,float b1,float a2,float b2);
float display(float d);
float input_values()
{
    float a1,b1,a2,b2;
    printf("enter a1 value:");
    scanf("%f",&a1);
    printf("enter a2 value:");
    scanf("%f",&a2);
    printf("enter b1 value:");
    scanf("%f",&b1);
    printf("enter b2 value:");
    scanf("%f",&b2);
    calculate_distance(a1,b1,a2,b2);
}
float calculate_distance(float a1,float b1,float a2,float b2)
{
    float d;
    d=sqrt((b2-b1)*(b2-b1)+(a2-a1)*(a2-a1));
    display(d);
}
float display(float d)
{
    printf("The distance between two points is:%f",d);
}
int main()
{
    input_values();
    return 0;
}
