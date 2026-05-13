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
 int sum1=0,sum2=0;
 cin>>n>>k;
 for(int i=1;i<=n;++i)
 {
  cin>>a[i];
 }
 for(int i=1;i<=n;++i)
 {
  cin>>b[i];
  if(b[i]<a[i])
  {
   sum1+=a[i]-b[i];
  }
 } 
 if(sum1>k)
 {
  cout<<0<<endl;
  return 0;
 }
 int flag=0;
 int l=-1,r=2e9+1;
 while(l+1<r)
 {
  int mid=(l+r)/2;
  if(check(mid))
  {
   flag=1; 
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