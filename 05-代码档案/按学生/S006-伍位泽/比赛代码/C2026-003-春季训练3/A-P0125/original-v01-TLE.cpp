#include <bits/stdc++.h>
using namespace std;
bool t[200005];
int a[200005] , b[200005];
bool ttt (int n)
{
    for (int i=1;i<=n;i++)
    {
        if (a[i]!=0) return 1;
    }
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q , n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        long long sum=0;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        while (ttt (n)==1)
        {
            int maxn=0;
            for (int i=1;i<=n;i++)
            {
                sum+=a[i];
            }         
            for (int i=1;i<=n;i++)
            {
                if (t[a[i]]==1)
                {    
                    maxn=max (maxn , a[i]);    
                }
                b[i]=maxn;
                t[a[i]]=1;
            }
            for (int i=1;i<=n;i++)
            {
                a[i]=b[i];
            }
            memset (t , 0 , sizeof (t));
        }
        cout << sum << "\n";
    }
    return 0;
}