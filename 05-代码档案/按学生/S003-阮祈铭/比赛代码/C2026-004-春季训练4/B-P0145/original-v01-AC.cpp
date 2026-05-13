#include<bits/stdc++.h>
using namespace std;
const int kMaxN=1e5+10;
int t;
int q1[kMaxN];
int q2[kMaxN];
long long pow2[kMaxN]={1};
long long x=2;
int main()
{
    for(int i=1;i<=1e5;i++)
    {
        pow2[i]=x;
        x*=2;
        x=x%(long long)(1e9+7);
    }
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>q1[i];
    }
    for(int i=1;i<=t;i++)
    {
        cin>>q2[i];
    }
    for(int i=1;i<=t;i++)
    {
        cout<<pow2[q2[i]]<<endl;
    }
    return 0;
}