#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x3f3f3f3f
#define mem(a,b) memset(a,b,sizeof(a))
#define closeio std::ios::sync_with_stdio(false)
 int a[200005];
 int main()
{
 int n,i,j,l,r,maxn=0;
 cin>>n;
 cin>>a[0];
 l=a[0];
 j=0;
 for(i=1;i<n;i++)
 {
  cin>>a[i];
  if(l*2>=a[i])
  {
   maxn=max(maxn,i-j);
  } 
  else
    j=i;
  l=a[i];
   } 
 cout<<maxn+1<<endl;
 return 0;
}