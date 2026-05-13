#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long a , b , maxn;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        maxn=-1;
        for (int i=1;i<=sqrt (b);i++)
        {
            if (b%i==0)
            {
                if ((a*i+b/i)%2==0)
                {
                    maxn=max (maxn , a*i+b/i);
                }
                if (a*(b/i)+i%2==0)
                {
                    maxn=max (maxn , a*(b/i)+i);                                                                                        
                }
            }
        }
        cout << maxn <<"\n";
    }
    return 0;
}