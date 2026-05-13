#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k,w; 
map<char,int>vis;
signed main()
{
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;++i)
    {
        sum+=i; 
    }
    if(sum*k<n)
    {
        cout<<0;
    }
    else
    {
        cout<<sum*k-n;
    }
    return 0;
}