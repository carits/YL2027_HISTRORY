#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n , k , v , cnt=0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k>=n)
        {
            cout << 0 << "\n";
            continue;
        }
        k--;
        v=1;
        cnt=1;
        for (int i=1;i<=k;i++)
        {
            v*=2;
            if (v>n)
            {
                break;
            }    
            if (v+(k-i)>n)
            {
                cnt+=n-v+1;
            }
            else if (v+(k-i)>v*2)
            {
                cnt+=v+1;    
            }
            else
            {
                cnt+=k-i+1;
            }
        }
        cout << n-cnt << "\n";
    }
    return 0;
}