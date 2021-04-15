#include<stdio.h>
#include<string.h>
typedef struct wage
{
   char name[100];
   int mins;
   float hours;
   float hourly_wage;
   float gross_pay;
}worker;
worker input_namewage()
{
  worker w;
  scanf("%s %f",&w.name,&w.hourly_wage);
  return w;
}
int find_worker(int n,worker w[n],char name[])
{
  for(int i=0;i<n;i++)
  {
    if(!strcmp(name,w[i].name));
  }
  return 0;
}
void input_n_namewage(int n,worker w[n])
{
  for(int i=0;i<n;i++)
  {
    w[i]=input_namewage();
  }
}
void time_cards(int totalworkers,worker w[totalworkers])
{
  int entries,min,index;
  char name[100];
  scanf("%d",&entries);
  for(int i=0;i<entries;i++)
  {
    scanf("%s%d",&name,&min);
    index=find_worker(totalworkers,w,name);
    w[index].mins+=min;
   }
}
float compute_hours(float mins)
{
  return mins/60;
}
void compute_grosspay(worker *w)
{
   w->hours=compute_hours(w->mins); 
   if(w->hours<=40.0)
      w->gross_pay=w->hourly_wage*w->hours;
   else
      w->gross_pay=(w->hourly_wage*40.0)+(1.5*(w->hourly_wage*(w->hours-40.0)));
 }
void compute_n_grosspay(int n,worker w[n])
{
  for(int i=0;i<n;i++)
  {
    compute_grosspay(&w[i]);
  }
}
void output(worker w)
{
  printf("%s: %.2f hours, %.2f",w.name,w.hours,w.gross_pay);
}
void output_n_worker(int n,worker w[n])
{
  for(int i=0;i<n;i++)
  {
    output(w[i]);
  }
}
int main()
{
  int n;
  worker w[n];
  input_n_namewage(n,w);
  time_cards(n,w);
  compute_n_grosspay(n,w);
  output_n_worker(n,w);
  return 0;
} 
