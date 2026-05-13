#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m , sum=0;
    cin >> n >> m;
    int v;
    while(n--)
    {
        cin >> v;
        sum+=v;
    }
    cout << sum/m;
    return 0;
}