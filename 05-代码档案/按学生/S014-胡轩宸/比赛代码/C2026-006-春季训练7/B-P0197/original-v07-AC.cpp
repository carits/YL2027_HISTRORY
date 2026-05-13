#include <bits/stdc++.h>
#define int long long
using namespace std;
int T,n,a[200050]; 
signed main()
{
 cin>>T;
 while(T--)
 {
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
     }
        cout<<a[n]<<' ';
     for(int i=1;i<n;i++)
     {
         cout<<a[i]<<' ';
     }
     cout<<endl;
 }
 return 0;
}