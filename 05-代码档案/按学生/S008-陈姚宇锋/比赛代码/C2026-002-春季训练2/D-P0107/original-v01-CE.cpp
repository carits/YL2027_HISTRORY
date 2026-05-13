#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{   
    int t,n;
    double ans,h,d,sum,x;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n>>d>>h;
       dum=0;
       ans=d*h/2*n;
       for(int i=1;i<=n;i++)
       {
   	        cin>>x;
   	       if(last>x) 
          {
              ans-=d*(sum-x)*(sum-x)/(2*h);     
          }
    	  dum=x+h;
   	   }
       cout<<ans;
   }
   return 0;
}