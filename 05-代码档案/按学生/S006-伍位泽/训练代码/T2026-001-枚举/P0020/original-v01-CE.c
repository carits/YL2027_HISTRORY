#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n;
    bool a , b , c;
    cin >> n;
    int cnt=0;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a+b+c>=2)
        {
            cnt++;
        }    
    }
    cout << cnt;
    return 0;
}