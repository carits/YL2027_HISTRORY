#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int n , a , b , c;
    cin >> n >> a >> b >> c;
    int minn=1e9;
    int k;
    for (int i=0;i<=n/a;i++)
    {
        for (int j=0;j<=(n-i/a*a)/b;j++)
        {
            k=(n-i*a-j*b)/c;
            if (i*a+j*b+k*c==n&&k>=0)
            {
                minn=min (minn , i+j+k);
            }    
        }    
    }
    cout << minn;
    return 0;
}