#include<bits/stdc++.h>
using namespace std;
long long n, k;
bool check(int v)
{
 int cnt=0,i=0;
 while(v/pow(k,i) > 0)
 {
  cnt+=v/pow(k,i);
  i++;
 }
 return cnt>=n;
}
int erfen() 
{
 int l=0,r=n+1,mid;
 while(l+1<r)
 {
  mid=(l+r)/2;
  if(check(mid))
  {
   r=mid;
  }
  else
  {
   l=mid;
  }
 }
 return r;
}
int main ()
{
 cin >> n >> k;
 cout << erfen() << endl;
 return 0;
}