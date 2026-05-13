#include<bits/stdc++.h>
using namespace std;
 int main()
{
 long long int t;
 cin>>t;
 while (t--)
 {
  long long int n, s = 0, c = 0;
  cin>>n;
  long long int a[200007], i;
  for (i=0;i<n;i++)
  {
   cin>>a[i];
   s+=a[i];
  }
  if (s%n==0)
  {
   for (i=0;i<n;i++)
   {
    if (a[i]>s/n)
    {
     c+=1;
    }
   }
   cout<<c<<endl;
  }
  else
  {
   cout<<-1<<endl;
  }
 }
}