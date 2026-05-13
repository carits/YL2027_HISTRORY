#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b , maxn , j;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        maxn=-1;
        for (int i=1;i<=b;i++)
        {
            if (b%i==0)
            {
                j=a*i+b/i;
                if (j%2==0)
                {
                    maxn=max (maxn , j);    
                }
            }
        }
        cout << maxn <<"\n";
    }
    return 0;
}