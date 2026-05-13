#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+3;
int a[N];
int t,n,cnt;
map<int,int>op;
signed main()
{
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(int i=1;i<=n;++i)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;++i)
        {
            for(int sum=a[i];sum<=i+n;sum+=a[i])
            {
                int j=sum-i;
                if(i<j && a[i]*a[j]==i+j)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl; 
    }
    return 0;
}