#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b;
    int j;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        unsigned long long maxn=-1;
        for (int i=1;i<=sqrt(b);i++)
        {
            if (b%i==0)
            {
                j=b/i;
                if ((a*j+b/j)%2==0)
                {
                    maxn=max (maxn , a*j+b/j);    
                }
            }
        }
        cout << maxn <<"\n";
    }
    return 0;
}