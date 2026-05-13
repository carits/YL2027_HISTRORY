#include <bits/stdc++.h>
using namespace std;
long long a[200005] , b[200005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t , n;
    cin >> t;
    long long maxn1=0 , maxn2=0 , cnt2=0 , cnt3=0 , s;
    while (t--)
    {
        maxn1=0 , maxn2=0;
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
            maxn2=max (maxn2 , a[i]);
        }
        for (int i=1;i<=n;i++)
        {
            cin >> b[i];
        }
        sort (a+1 , a+n+1);
        for (int i=0;i<=maxn2;i++)
        {
            for (int j=1;j<=n;j++)
            {
                if (a[i]>=j)
                {
                    s=i;
                    break;
                }
            }
            cnt2=0 , cnt3=n-s+1;
            while (cnt2<=n)
            {
                if (cnt3<b[i])
                {
                    maxn1=max (maxn1 , cnt2*i);
                    break;
                }
                cnt2++;
                cnt3-=b[i];
            }
            maxn1=max (maxn1 , n*i);
        }
        cout << maxn1 << "\n";
    }
    return 0;
}