#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n,x,y,flag;
signed main()
{
 cin>>t;
 for(int j=1;j<=t;j++)
 {
  cin>>n;
  flag=0;
  for(int i=1;i*i*i<n;i++)
  {
   x=n-i*i*i;
   y=pow(x,1.0/3);
   if(y*y*y==x && y)
   {
    cout<<"yeS"<<endl;
    flag=1;
    break;
   }
   y++;
   if(y*y*y==x)
   {
    cout<<"yeS"<<endl;
    flag=1;
    break;
   }
  }
  if(!flag) 
  {
   cout<<"nO"<<endl;
  }
 }
 return 0;
}