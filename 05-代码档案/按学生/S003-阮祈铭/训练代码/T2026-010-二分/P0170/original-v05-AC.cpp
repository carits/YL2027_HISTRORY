#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000010]={INT_MIN};
queue<int> q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n>>m;
    a[n+1]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+m+1);
    while(!q.empty())
    {
        int l=0,r=m+1,mid;
        while(l+1<r)
        {
            mid=(l+r)/2;
            if(a[mid]>=q.front())
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        if(a[r]==q.front())
        {
            cout<<q.front()<<' ';
        }
        q.pop();
    }
    return 0;
}