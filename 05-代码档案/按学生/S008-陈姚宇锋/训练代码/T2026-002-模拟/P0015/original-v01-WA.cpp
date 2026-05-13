#include <bits/stdc++.h>
using namespace std;
#define int long long
queue<int>op;
int a[1000009];
int vis[1000009];
signed main()
{
    int n,s,m;
    cin>>n>>s>>m;
    for(int i=1;i<=n;++i)
    {
        op.push(i);
    }
    while(op.size())
    {
        int i=0;
        while(1)
        {
            if(i==m-1)
            {
                cout<<op.front()<<' ';
                op.pop();
                break;
            }
            i++;
            op.push(op.front());
            op.pop();
        
        }
    }
	return 0;
}	