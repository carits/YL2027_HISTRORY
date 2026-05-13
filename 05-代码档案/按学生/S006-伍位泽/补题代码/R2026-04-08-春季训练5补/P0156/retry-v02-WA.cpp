#include <bits/stdc++.h>
using namespace std;
long long a , b , x , y;
int main ( )
{
    freopen("lttl.in", "r", stdin);
    freopen("lttl.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    if (a%2==1||b%2==1)
    {
        cout << "Impossible!";
        return 0;
    }
    x=(a/2*4-b)/2 , y=(a-x*4)/2;
    if (y*4+x*6==b)
    {
        cout << y << " " << x; 
    }
    else
    {
        cout << "Impossible!";
    }
    return 0;
}