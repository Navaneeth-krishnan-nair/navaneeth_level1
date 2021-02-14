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
    int gcd;
    int x=(f1.n*f2.d)+(f2.n*f1.d);
    int y=(f1.d*f2.d);
    for (int i=1;i<=x && i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        gcd=i;
    }
    return gcd;
}
void output(frac f1,frac f2,int gcd)
{
    int x=(f1.n*f2.d)+(f2.n*f1.d);
    int y=(f1.d*f2.d);
    printf("the addition of (%d/%d) and (%d/%d) is (%d/%d)",f1.n,f1.d,f2.n,f2.d,x/gcd,y/gcd);
}
int main()
{
    frac f1,f2;
    int gcd;
    f1=input();
    f2=input();
    gcd=compute(f1,f2);
    output(f1,f2,gcd);
    return 0;
}
