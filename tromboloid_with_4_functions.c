//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
void input1();
void volume(float h,float d,float b);
void output(float v);

void input1()
{
    float h,d,b;
    printf("enter the height:");
    scanf("%f",&h);
    printf("enter the depth:");
    scanf("%f",&d);
    printf("enter the breadth:");
    scanf("%f",&b);
    volume(h,d,b);
}
void volume(float h,float d,float b)
{
    float v;
    v=((h*d*b)+(d/b))/3;
    output(v);
}
void output(float v)
{
   
    printf("the volume of the tromboloid is:%f",v);
   
}
int main()
{
    input1();
    return 0;
}
