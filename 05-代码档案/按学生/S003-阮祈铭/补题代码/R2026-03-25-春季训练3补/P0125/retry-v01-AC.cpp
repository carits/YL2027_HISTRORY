#include<bits/stdc++.h>
using namespace std;
const int kMaxN=2e5+10;
int t,n,a[kMaxN];
long long sum;
map<int,int> mp;
void mad()
{
    mp.clear();
    int maxn=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(mp[a[i]]==1)
        {
            maxn=max(maxn,a[i]);
        }
        mp[a[i]]++;
        a[i]=maxn;
    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        mad(),mad();
        for(int i=n;i>=1;i--)
        {
            sum+=(long long)a[i]*(n-i+1);
        }
        cout<<sum<<endl;
    }
    return 0;
}