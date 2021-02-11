//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct frac
{
    int n,d;
}frac;
frac input()
{
    frac f;
    printf("enter the numerator and denominator:");
    scanf("%d%d",&f.n,&f.d);
    return f;
}
float compute(frac f1,frac f2)
{
    float add;
    add=(((f1.n*f2.d)+(f2.n*f1.d))/(f1.d*f2.d));
    return add;
}
void output(frac f1,frac f2,float add)
{
    printf("the addition of (%d/%d) and (%d/%d) is %f",f1.n,f1.d,f2.n,f2.d,add);
}
int main()
{
    frac f1,f2;
    float add;
    f1=input();
    f2=input();
    add=compute(f1,f2);
    output(f1,f2,add);
    return 0;
}
