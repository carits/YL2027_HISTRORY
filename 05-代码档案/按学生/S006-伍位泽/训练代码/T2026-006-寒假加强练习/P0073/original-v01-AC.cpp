#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cnt=0;
        for (int i=0;i<=n/4;i++)
        {
            if ((n-i*4)%2==0)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}