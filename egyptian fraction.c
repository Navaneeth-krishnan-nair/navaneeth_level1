#include<stdio.h>
typedef struct
{
	int n;
	int numerator[100];
	int denominator[100];
	int f_numerator;
	int f_denominator;
}fract;
int input()
{
	int n;
	printf("Enter number of  cases: ");
	scanf("%d",&n);
	return n;
}
fract input_fract()
{
	fract f;
	printf("Enter the number of fractions: ");
	scanf("%d",&f.n);
	for(int i=0;i<f.n;i++)
	{
	    printf("Enter the denominator of the fraction: ");
	    scanf("%d",&f.denominator[i]);
	    f.numerator[i]=1;
	}
	return f;
}
void input_n_fract(int n, fract f[n])
{
	for(int i=0;i<n;i++)
	{
		f[i] = input_fract();
	}
}
int gcd(int x, int y)
{
    while (x != y)
    {
       	if (x > y)
         	x -= y;
        else
          	y -= x; 
    }
   	return x;
}
void compute_fract(fract *f)
{
	int f_numerator=0,f_denominator=1, f_gcd;
	for(int i=0;i<f->n;i++)
	{
		f_denominator *= f->denominator[i];
	}
	for(int i=0;i<f->n;i++)
	{
		f_numerator += (f->numerator[i]) * (f_denominator/f->denominator[i]);
	}
	f_gcd = gcd(f_numerator, f_denominator);
    f->f_numerator = f_numerator/f_gcd;
	f->f_denominator = f_denominator/f_gcd;
}
void compute_n_fract(int n, fract f[n])
{
	for(int i=0;i<n;i++)
	{
		compute_fract(&f[i]);
	}
}
void output_fract(int n,fract f)
{
	for(int i=0;i<f.n-1;i++)
	{
	    printf("%d/%d + ",f.numerator[i],f.denominator[i]);
    }
    printf("%d/%d = %d/%d\n",f.numerator[f.n-1],f.denominator[f.n-1],f.f_numerator,f.f_denominator);
}
void output_n_fract(int n, fract f[n])
{
	for(int i=0;i<n;i++)
	{
		output_fract(n,f[i]);
	}
}
int main()
{
	int n;
	n = input();
	fract f[n];
	input_n_fract(n,f);
	compute_n_fract(n,f);
	output_n_fract(n,f);
	return 0;
}

