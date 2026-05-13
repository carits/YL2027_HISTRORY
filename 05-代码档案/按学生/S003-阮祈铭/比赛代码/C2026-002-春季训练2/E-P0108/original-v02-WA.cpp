#include<bits/stdc++.h>
using namespace std;
int t,n;
bool mp[1000010];
int main()
{
    for(long long i=2;i<=1e6;i++)
    {
        long long ans=0;
        for(int j=0;j<=9;j++)
        {
            ans+=(long long)pow(i,j);
            if(ans>1e6)
            {
                break;
            }
            if(j>=2)
            {
                mp[ans]=true;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(mp[n]==true)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}