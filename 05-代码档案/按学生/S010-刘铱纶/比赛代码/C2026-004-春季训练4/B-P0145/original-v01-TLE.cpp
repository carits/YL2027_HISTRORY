#include<bits/stdc++.h>

using namespace std;

int t, n[100005], k[100005], mod = 1e9 + 7;
map<int, map<int, int>> c;

int main()
{
    cin >> t;
    
    for(int i = 1; i <= t; i++)
    {
        cin >> n[i];
    }
    
    for(int i = 1; i <= t; i++)
    {
        cin >> k[i];
    }
    
    for(int i = 1; i <= 1e5; i++)
    {
        c[i][1] = 1;
        c[i][i] = 1;
        for(int j = 2; j <= i; j++) 
        {
            c[i][j] = (c[i][j - 1] + c[i - 1][j - 1]) % mod;
        }
    }
    
    for(int i = 1; i <= t; i++)
    {
        cout << c[n[i] + 1][k[i] + 1] % mod << "\n";
    } 
    return 0;
}