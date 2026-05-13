#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int x,int k,int n,int a,int b)
{
 k-=x*a;
 k-=(n-x)*b; 
 return k>0;
}
signed main()
{
 int q;
 cin>>q;
 while(q--)
 {
  int k,n,a,b;
  cin>>k>>n>>a>>b;
  int l=-1,r=n+1;
  while(l+1<r)
  {
   int mid=(l+r)/2;
   if(check(mid,k,n,a,b))
   {
    l=mid;
   } 
   else
   {
    r=mid;
   }
  }
  cout<<l<<endl;
 }
 return 0;
}