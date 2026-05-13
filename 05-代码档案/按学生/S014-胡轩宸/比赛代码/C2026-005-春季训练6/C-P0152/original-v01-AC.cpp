#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long ans,x,n,t;
bool p1,p2;
int main()
{
 cin>>t;
 while(t--)
 {
  cin>>n;
  cin>>s1>>s2;
  ans=0,x=-1;
  for(int i=0;i<n;i++)
  {
    p1=((s1[i]=='0')or(s2[i]=='0'));
   p2=((s1[i]=='1')or(s2[i]=='1'));
    if(p1 and p2)x=2,ans+=x;
    else
   if(p1==false)
   {
      if(x==1)
                 {
                     ans++,x=-1;
                 }
      else
      {
          x=0;
      } 
   }
   else
   {
    ans++;
    if(x==0)
                {
                    ans++,x=-1;
                }
    else
                {
                    x=1;
                } 
   }
  }
  cout<<ans<<endl;
 }
 return 0;
}