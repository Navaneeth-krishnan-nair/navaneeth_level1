//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
void input();
void compute(float,float,float,float);
void output(float,float,float,float,float);
struct point
{
    float x1,y1,x2,y2;
}p;
void input()
{
    printf("enter x1,y1:");
    scanf("%f%f",&p.x1,&p.y1);
    printf("enter x2,y2:");
    scanf("%f%f",&p.x2,&p.y2);
    compute(p.x1,p.y1,p.x2,p.y2);
}
void compute(float x1,float y1,float x2,float y2)
{
    float distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    output(x1,y1,x2,y2,distance);
}
void output(float x1,float y1,float x2,float y2,float d)
{
    printf("The distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,d);
}
int main()
{
    input();
    return 0;
}
