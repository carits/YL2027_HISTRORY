#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , a , b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int p=-1;
        for (int i=a+1;i<=b-1;i++)
        {
            if (__gcd (a , i)==1&&__gcd (i , b)==1)
            {
                p=i;
                break;
            }    
        }
        cout << p << "\n";
    }
    return 0;
}