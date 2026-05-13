#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, k;
bool check(int x) 
{
 int cnt = x;    
 if(x >= k) 
 {   
  cnt += (x - 1 + x - k + 1) * (k - 1) / 2;
 } 
 else 
 {  
  cnt += x * (x - 1) / 2;
  cnt += k - 1 - x + 1;
 }
 if(x >= n - k) 
 {
  cnt += (x - 1 + x - n + k) * (n - k) / 2;
 } 
 else 
 {
  cnt += x * (x - 1) / 2;
  cnt += n - k - x + 1;
 }
 return cnt <= m;
}
signed main() 
{
 cin>>n>>m>>k; 
 int ans = 0;
 int l=1,r=m;
 while(l+1<r) 
 { 
  int mid =(l+r)/2;
  if(check(mid)) 
  {
   ans=max(ans, mid);
   l=mid+1;
  } 
  else 
  {
   r=mid;
  }
 }
 cout<<ans;
}