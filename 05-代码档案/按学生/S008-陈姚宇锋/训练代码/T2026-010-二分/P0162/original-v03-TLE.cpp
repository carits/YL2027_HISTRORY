#include <bits/stdc++.h>
using namespace std;
#define int long long 
 signed main()
{
 int t;
 cin>>t;
 while(t--)
 {
  int x,flag=0;
  cin>>x;
  for(int i=1;i*i*i<=x;++i)
  {
   for(int j=1;j*j*j<=x;++j)
   {
    if(i*i*i+j*j*j==x)
    {
     flag=1;
     break;
    }
   }
   if(flag==1)
   {
    break;
   } 
  } 
  if(flag==1)
  {
   cout<<"YES"<<endl;
  }
  else
  {
   cout<<"NO"<<endl;
  }
 }
 return 0;
}