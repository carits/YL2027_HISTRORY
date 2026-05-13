#include <bits/stdc++.h>
using namespace std;
map <int , int> mp;
int n , q , v , k;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    while (n--)
    {
        cin >> v;
        mp[v]++;
    }
    while (q--)
    {
        cin >> k;
        if (k>=1)
        {
            mp[k]++;
        }
        else
        {
            k=-k;
            int cnt=0;
            for (auto i:mp)
            {
                cnt++;
                if (cnt==k)
                {
                    mp[i.first]--;
                    if (mp[i.first]==0)
                    {
                        mp.erase (i.first); 
                    }
                }
                break;
            }
        }
    }
    for (auto i:mp)
    {
        cout << i.first;
        return 0;
    }
    cout << 0;
    return 0;
}