#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , n , s , x;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> x;
        int v , sum=0;
        for (int i=1;i<=n;i++)
        {
            cin >> v;
            sum+=v;
        }
        if (sum<=s&&(s-sum)%x==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}