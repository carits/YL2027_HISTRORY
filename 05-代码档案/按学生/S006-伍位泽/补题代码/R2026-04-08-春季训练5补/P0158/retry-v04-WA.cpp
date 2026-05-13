#include <bits/stdc++.h>
using namespace std;
double x1 , u1 , x2 , u2;
int l;
bool d1 , d2;
double c1 ( )
{
  if (d1==0)
  {
    x1=l-x1;
    x2=l-x2;
    d1=1-d1;
    d2=1-d2;
  }
  if (x1>x2)
  {
    swap (x1 , x2);
    swap (u1 , u2);
    swap (d1 , d2);
  }
  return (x2-x1)/(u1-u2);
}
double c2 ( )
{
  if (d1==0)
  {
    x1=l-x1;
    x2=l-x2;
    d1=1-d1;
    d2=1-d2;
  }
  if (x1>x2)
  {
    swap (x1 , x2);
    swap (u1 , u2);
    swap (d1 , d2);
  }
  double sum=0;
  if (d1==1&&d2==1)
  {
    double x=(l-x2)/u2;
    if (x1+x*u1>=l)
    {
      return (x2-x1)/(u1-u2);
    }
    else
    {
      sum+=x;
      x1=x1+x*u1;
      x2=l;
      d2=1-d2;
    }
  }
  return sum+c1 ( );
}
double c3 ( )
{
  double sum=0;
    if (d1==0)
  {
    x1=l-x1;
    x2=l-x2;
    d1=1-d1;
    d2=1-d2;
  }
  if (x1>x2)
  {
    swap (x1 , x2);
    swap (u1 , u2);
    swap (d1 , d2);
  }
  if (d1==0&&d2==1)
  {
    double x=x1/u1 , y=(l-x2)/u2;
    if (x>=y)
    {
      sum+=y;
      x1=x1-y*u1;
      x2=l;
      d2=1-d2;
     } 
     else
     {
       sum+=x;
       x1=0;
       x2=x2+x*u2;
       d1=1-d1;
     }
  }
  return sum+c2 ( );
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> x1 >> u1 >> d1 >> x2 >> u2 >> d2;
    if (u1==0&&u2==0)
    {
        printf ("Impossible!");
        return 0;
    }
    if (u2==0)
    {
      swap (x1 , x2);
      swap (u1 , u2);
      swap (d1 , d2);
    }
    if (u1==0)
    {
       if (x1>x2)
       {
         x1=l-x1;
         x2=l-x2;
         d1=1-d1;
         d2=1-d2;
       }
       double sum=0;
        if (d2==1)
        {
            sum=((l-x2)*2+(x2-x1))/u2;
            printf ("%.5lf" , sum);
            return 0;
        }
        else
        {
            sum=(x2-x1)/u2;
            printf ("%.5lf" , sum);
            return 0;
        }
    }
    printf ("%.5lf" , c3 ( ));
    return 0;
}