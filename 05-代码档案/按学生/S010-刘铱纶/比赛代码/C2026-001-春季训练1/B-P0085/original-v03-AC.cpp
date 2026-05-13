#include<bits/stdc++.h>

using namespace std;

int t, n, a[15];

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        
        bool v = 0;
        a[n + 1] = a[n];
        for(int i = 1; i <= n; i++)
        {
            if(a[i] > a[i + 1])
            {
                cout << 1 << "\n";
                v = 1;
                break;
            }
        }
        
        if(v == 0)
        {
            cout << n << "\n";
        }
    }
    return 0;
}