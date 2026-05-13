#include <bits/stdc++.h>
using namespace std;
int a[100005] , b[100005];
long long sum=0;
int m , n;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for (int i=1;i<=m;i++)
    {
        cin >> a[i];
    }
    for (int i=1;i<=n;i++)
    {
        cin >> b[i];
    }
    sort (a+1 , a+m+1);
    for (int i=1;i<=n;i++)
    {
        int pos=lower_bound (a+1 , a+n+1 , b[i])-a;
        if (pos==1)
        {
            sum+=a[1]-b[i];
        }
        else if (pos>=n)
        {
            sum+=abs (b[i]-a[n]);
        }
        else
        {
            sum+=min (b[i]-a[pos-1] , a[pos]-b[i]);
        }
    }
    cout << sum;
    return 0;
}