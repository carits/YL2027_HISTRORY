#include <bits/stdc++.h>
using namespace std;
int a[200005] , b[200005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    cin >> t;
    long long maxn1=0 , maxn2=0 , cnt1=0 , cnt2=0 , cnt3=0;
    int v;
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
                    v=i;
                    break;
                }
            }
            cnt1=0 , cnt2=0 , cnt3=n-v+1;
            while (cnt2<=n)
            {
                if (cnt3<b[i])
                {
                    maxn1=max (maxn1 , cnt2*i);
                    break;
                }
                cnt2++;
            }
        }
        cout << maxn1 << "\n";
    }
    return 0;
}