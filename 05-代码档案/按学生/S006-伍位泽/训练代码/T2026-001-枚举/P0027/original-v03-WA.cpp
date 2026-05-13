#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n , x , y;
    cin >> n;
    int maxn=-1e9 , minn=1e9;
    while (n--)
    {
        maxn=-1e9 , minn=1e9;
        cin >> x;
        while (x--)
        {
            cin >> y;
            maxn=max(maxn , y);
            minn=min(minn , y);
        }
        cout << maxn-minn << "\n";
    }
    return 0;
}