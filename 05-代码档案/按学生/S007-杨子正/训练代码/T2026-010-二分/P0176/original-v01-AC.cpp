#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long double n;
    cin >> n;
    cout << (long long)(powl(n, 1.0 / 3.0) + 1e-8);
    return 0;
}