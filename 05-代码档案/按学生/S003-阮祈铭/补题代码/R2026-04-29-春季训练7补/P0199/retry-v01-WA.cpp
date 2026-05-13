#include<bits/stdc++.h>
using namespace std;
const int kMaxN=1e6+10;
const int kMaxQ=1e6+10;

int n,q,a[kMaxN],b[kMaxQ],cnt;

bool check(int x) // 判断 
{
    int num = 0,xnum = 0;
    for(int i=1;i<=n && a[i]<=x ;i++)
    {
        num++;
    }
    for(int i=1;i<=q;i++)
    {
        if(b[i]<0)
        {
            if(abs(b[i]) <= num)
            {
                num--;
            }
        }
        else
        {
            if(b[i] <= x)
            {
                num++;
            }
        }
    }
    return num>0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>b[i];
        if(b[i]<0)
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        cout<<0<<endl;
        return 0;
    }
    int l=0,r=1e6+1,mid;// 找到满足 <= x 之前还有数 
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<r<<endl;
    return 0;
}