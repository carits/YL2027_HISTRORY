#include <bits/stdc++.h>
using namespace std;
priority_queue <int> qp;
int main()
{
    int n, a, b, t = 0, k, m;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        qp.push(x);
    }
    while (true)
    {
        int k = qp.top();
        qp.pop();
        if (k - t <= 0)
        {
            cout << t / a;
            return 0;
        }
        t += a;
        k -= b;
        qp.push(k);
    }
    return 0;
}