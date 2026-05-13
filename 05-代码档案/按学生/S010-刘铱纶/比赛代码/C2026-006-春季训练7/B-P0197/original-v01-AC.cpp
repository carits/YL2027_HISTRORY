#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

int t, n, a[N];

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
        
        for(int i = 2; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1] << "\n";
    }
    return 0;
}