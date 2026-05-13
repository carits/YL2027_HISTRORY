#include <bits/stdc++.h>
using namespace std;
int a[200005];
int Q , n;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> Q;
    while (Q--)
    {
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for (int i=2;i<=n;i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1] << "\n";
    }
     return 0;
}