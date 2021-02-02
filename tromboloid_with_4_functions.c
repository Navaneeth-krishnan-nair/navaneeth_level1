//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input1();
float input2();
float input3();

float input1()
{
    float h;
    printf("enter the height:");
    scanf("%f",&h);
    return h;
}
float input2()
{
    float d;
    printf("enter the depth:");
    scanf("%f",&d);
    return d;
}
float input3()
{
    float b;
    printf("enter the breadth:");
    scanf("%f",&b);
    return b;
}
int main()
{
    float H=input1();
	float D= input2();
	float B=input3();
	float vol=((H*D*B)+(D/B))/3;
	printf("The volume of the tromboloid is: %f", vol);
	return 0;
}
