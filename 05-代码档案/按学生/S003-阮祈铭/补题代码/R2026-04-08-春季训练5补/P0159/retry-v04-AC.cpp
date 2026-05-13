#include<bits/stdc++.h>
using namespace std;
long long n,t,x,y,a[500010],maxn,minn=LONG_LONG_MAX;
stack<long long> stk,stk1,stk2,ans;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>n>>t;
    while(t--)
    {
        cin>>x>>y;
        stk1.push(x),stk2.push(y);
        a[x]+=y;
        maxn=max(maxn,a[x]);
        stk.push(maxn);
    }
    for(int i=1;i<=n;i++)
    {
        minn=min(minn,a[i]);
    }
    while(!stk.empty())
    {
        ans.push(stk.top()-minn);
        stk.pop();
        a[stk1.top()]-=stk2.top();
        minn=min(minn,a[stk1.top()]);
        stk1.pop(),stk2.pop();
    }
    while(!ans.empty())
    {
        cout<<ans.top()<<' ';
        ans.pop();
    }
    return 0;
}