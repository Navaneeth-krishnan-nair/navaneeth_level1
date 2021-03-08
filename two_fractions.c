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
float gcd(int x,int y)
{
    if(x==0)
    return y;
    return gcd(y%x,x);
}
frac add(frac f1,frac f2)
{
    frac sum;
    int a=gcd(f1.d,f2.d);
    sum.n=((f1.n*f2.d)+(f2.n*f1.d))/a,
    sum.d=(f1.d*f2.d)/a;
    return sum;
}


void output(frac f1,frac f2,frac sum)
{
    printf("the addition of (%d/%d) and (%d/%d) is (%d/%d)",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}
int main()
{
    frac f1,f2,sum;
    int gcd;
    f1=input();
    f2=input();
    sum=add(f1,f2);
    output(f1,f2,sum);
    return 0;
}
