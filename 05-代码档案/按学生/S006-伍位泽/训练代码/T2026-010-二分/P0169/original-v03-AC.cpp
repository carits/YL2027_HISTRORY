#include <bits/stdc++.h>
using namespace std;
int a[100005];
long long sum=0;
int m , n , v;
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for (int i=1;i<=m;i++)
    {
        cin >> a[i];
    }
    sort (a+1 , a+m+1);
    for (int i=1;i<=n;i++)
    {
        cin >> v;
        int pos=lower_bound (a+1 , a+m+1 , v)-a;
        if (pos==1)
        {
            sum+=a[1]-v;
        }
        else if (pos>m)
        {
            sum+=abs (v-a[m]);
        }
        else
        {
            sum+=min (v-a[pos-1] , a[pos]-v);
        }
    }
    cout << sum;
    return 0;
}