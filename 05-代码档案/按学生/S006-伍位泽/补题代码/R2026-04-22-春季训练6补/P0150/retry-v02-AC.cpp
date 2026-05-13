#include <bits/stdc++.h>
using namespace std;
int v[200005] , w[200005];
int t , n;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        long long sum=0;
        int cnt=0;
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        if (sum%n!=0)
        {
            cout << -1 <<  "\n";
            continue;
        }
        sum/=n;
        for (int i=1;i<=n;i++)
        {
            if (v[i]>sum) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}