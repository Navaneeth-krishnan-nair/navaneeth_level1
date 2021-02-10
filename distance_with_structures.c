//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x,y;
}Point;
Point input()
{
    Point p;
    printf("enter abscissa:");
    scanf("%f",&p.x);
    printf("enter ordinate:");
    scanf("%f",&p.y);
    return p;
}
float compute(Point p1,Point p2)
{
    float distance;
    distance=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
    return distance;
}
void output(Point p1,Point p2,float distance)
{
    printf("The distance between (%f,%f) and (%f,%f) is %f",p1.x,p1.y,p2.x,p2.y,distance);
}
int main()
{
    float distance;
    Point p1,p2;
    p1=input();
    p2=input();
    distance=compute(p1,p2);
    output(p1,p2,distance);
}
