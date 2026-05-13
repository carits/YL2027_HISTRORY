#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n , cnt=0;
    bool a , b , c;
    cin >> n; 
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