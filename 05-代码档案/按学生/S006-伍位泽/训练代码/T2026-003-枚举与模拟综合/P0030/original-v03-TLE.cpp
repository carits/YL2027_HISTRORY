#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , n;
    cin >> t;
    while (t--)
    {
        int cnt=0;
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for (int i=1;i<=n;i++)
        {
            for (int sum=a[i];sum<=n+i;sum+a[i])
            {
                int j=sum-i;
                if (a[i]*a[j]==i+j&&i<j)
                {
                    cnt++;
                }        
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}