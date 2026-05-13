#include <bits/stdc++.h>
using namespace std;
#define int long long
 signed main()
{
 int n,m;
 cin>>n>>m;
 int sum=4*60-m;
 for(int i=1;i<=n;++i)
 {
  if(sum>=i*5)
  {
   sum-=i*5;
  }
  else
  {
   cout<<i-1<<endl;
   return 0;
  }
 } 
 cout<<n<<endl;
 return 0;
}