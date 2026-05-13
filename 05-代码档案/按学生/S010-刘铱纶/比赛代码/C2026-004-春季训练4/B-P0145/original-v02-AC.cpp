#include<bits/stdc++.h>

using namespace std;

int t, n[100005], k[100005], mod = 1e9 + 7;
map<int, int> c;

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
    
    c[0] = 1;
    for(int i = 1; i <= 1e5 - 1; i++)
    {
        c[i] = c[i - 1] * 2 % mod;
    }
    
    for(int i = 1; i <= t; i++)
    {
        cout << c[k[i]] % mod << "\n";
    } 
    return 0;
}