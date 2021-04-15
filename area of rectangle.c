#include<stdio.h>
#include<math.h>
typedef struct
{
	float x;
	float y;
}vertex;
typedef struct
{
	float l;
	float b;
	float a;
	vertex v[3];
}rect;
int input()
{
	int n;
	printf("Enter number of rectangles: ");
	scanf("%d",&n);
	return n;
}
rect input_rect()
{
    rect r;
	for(int i=0;i<3;i++)
    {
		scanf("%f%f",&r.v[i].x,&r.v[i].y);
	}
	return r;
}
void input_n_rect(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		r[i] = input_rect();
	}
}
float max(float side1, float side2, float side3)
{
 	if(side1>side2 && side1>side3)
		return side1;
	else if(side2>side1 && side2>side3)
		return side2;
	else
		return side3;
}
float min(float side1, float side2, float side3)
{
    	if(side1<side2 && side1<side3)
		return side1;
	else if(side2<side1 && side2<side3)
		return side2;
	else
		return side3;
}
void compute_rect(rect *r)
{
	float side1,side2,side3,min_side,max_side,sum;
	side1 = sqrt(pow((r->v[0].x-r->v[1].x),2)+pow((r->v[0].y-r->v[1].y),2));
	side2 = sqrt(pow((r->v[2].x-r->v[1].x),2)+pow((r->v[2].y-r->v[1].y),2));
	side3 = sqrt(pow((r->v[2].x-r->v[0].x),2)+pow((r->v[2].y-r->v[0].y),2));
	min_side = min(side1,side2,side3);
	max_side = max(side1,side2,side3);
	sum = side1 + side2 + side3;
	r->b = sum - min_side - max_side;
    r->l = min_side;
	r->a = r->l * r->b;
}
void compute_n_rect(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		compute_rect(&r[i]);
	}
}
void output_rect(rect r)
{
	printf("\nArea of the rectangle with vertices (%.1f,%.1f), (%.1f,%.1f), (%.1f,%.1f) is %.1f",r.v[0].x,r.v[0].y,r.v[1].x,r.v[1].y,r.v[2].x,r.v[2].y,r.a);
}
void output_n_rect(int n, rect r[n])
{
	for(int i=0;i<n;i++)
	{
		output_rect(r[i]);
	}
}
int main()
{
	int n;
	n = input();
	rect r[n];
	input_n_rect(n,r);
	compute_n_rect(n,r);
	output_n_rect(n,r);
	return 0;
}	
