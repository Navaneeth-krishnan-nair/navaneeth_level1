//WAP to find the sum of n fractions.
#include<stdio.h>
typedef struct frac
{
  int n,d;
}frac;
frac input_one()
{
  frac f;
  printf("enter the numerator and denominator: ");
  scanf("%d%d",&f.n,&f.d);
  return f;
}
int no_of_frac()
{
  int n;
  printf("enter the no of fraction: ");
  scanf("%d",&n);
  return n;
}
void input_n(int n,frac a[n])
{
  for(int i=0;i<n;i++)
  {
     a[i]=input_one();
   }
}
int gcd(int x,int y)
{
  while(x!=y)
  {
     if(x>y)
     x=x-y;
     else
      y=y-x;
   }
}
frac add(frac f1,frac f2)
{
   frac sum;
   sum.n=((f1.n*f2.d)+(f2.n*f1.d)),
   sum.d=(f1.d*f2.d);
   int a=gcd(sum.n,sum.d);
   sum.n/=a;
   sum.d/=a;
   return sum;
}
frac add_n(int n,frac a[n])
{
   frac temp;
   temp.n=0;
   temp.d=1;
   for(int i=0;i<n;i++)
   {
      temp=add(temp,a[i]);
   }
   return temp;
}
int output(int n,frac ar[n],frac sum)
{
   printf("the sum of fraction: ");
   for(int i=0;i<n;i++)
   {
      printf("%d/%d ",ar[i].n,ar[i].d);
   }  
   printf("is %d/%d",sum.n,sum.d);
}
int main()
{
  int nof=no_of_frac();
 frac nf[nof];
 input_n(nof,nf);
 frac total_sum;
 total_sum=add_n(nof,nf);
 output(nof,nf,total_sum);
 return 0;
} 
