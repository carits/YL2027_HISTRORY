#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans;
priority_queue<int, vector<int>, greater<int> > q;
int main()
{
    cin >> n >> m;
    q.push(0);
    for(int i = 1; i <= n; i ++)
    {
        int w;
        cin >> w;
        int x = q.top() + w;
        ans = max(ans, x);
        if(q.size() >= m)
            q.pop();
        q.push(x);
    }
    cout << ans;
    return 0;
}