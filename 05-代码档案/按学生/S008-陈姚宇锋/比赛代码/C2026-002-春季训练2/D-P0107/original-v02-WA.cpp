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
       sum=0;
       ans=d*h/2*n;
       for(int i=1;i<=n;i++)
       {
   	        cin>>x;
   	       if(sum>x) 
          {
              ans-=d*(sum-x)*(sum-x)/(2*h);     
          }
    	  sum=x+h;
   	   }
       cout<<fixed<<setprecision(8)<<ans;
   }
   return 0;
}