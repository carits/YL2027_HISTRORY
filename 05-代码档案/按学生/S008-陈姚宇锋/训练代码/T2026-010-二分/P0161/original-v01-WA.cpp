#include <bits/stdc++.h>
using namespace std;
#define int long long
int k,n;
int a[100009];
int b[100009];
bool check(int x)
{
 int sum=0;
 for(int i=1;i<=n;++i)
 {
  if(b[i]<a[i]*x)
  {
   sum+=a[i]*x-b[i];
  } 
 } 
 return sum<=k;
}
signed main()
{
 cin>>n>>k;
 for(int i=1;i<=n;++i)
 {
  cin>>a[i];
 }
 for(int i=1;i<=n;++i)
 {
  cin>>b[i];
 } 
 int l=-1,r=2e9+1;
 while(l+1<r)
 {
  int mid=(l+r)/2;
  if(check(mid))
  {
   l=mid;
  } 
  else
  {
   r=mid;
  }
 }
 cout<<l<<endl; 
 return 0;
}