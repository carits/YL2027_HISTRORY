#include<bits/stdc++.h>
using namespace std;
#define int long long
int quan[100005];
signed main()
{
    freopen("calculate.in","r",stdin);
    freopen("calculate.out","w",stdout);
    int n;
    cin>>n;
    string a,b;
    for(int i = 0; i < n; i++)
    {
        cin>>quan[i];
    }
    cin>>a>>b;
    reverse(a.begin(),a.end()); 
    reverse(b.begin(),b.end()); 
    int sum=0,sum1=0;
    int idx=1;
    for(int i = 0; i < a.size();i++)
    {
        sum+=idx*(a[i]-'0');
        idx*=quan[i];  
    }
    idx=1;
    for(int i = 0; i < b.size();i++)
    {
        sum1+=idx*(b[i]-'0');
        idx*=quan[i];  
    }
    cout<<sum*sum1; 
    return 0;
} 
