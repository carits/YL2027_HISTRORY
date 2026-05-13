#include <bits/stdc++.h>
using namespace std;
int a[150005];
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , t;
    cin >> n;
    while (n--)
    {
        cin >> t;
        int x=-1e9 , y=-1e9 , z=1e9;
        for (int i=1;i<=t;i++)
        {
            cin >> a[i];
        }
        if (t==1)
        {
            cout << a[1];
            return 0;
        }
        for (int i=2;i<=t;i++)
        {
            int sum=0;
            for (int j=1;j<=n/i;j++)
            {
                if (t%i==0)
                {
                    for (int k=(j-1)*i;k<=j*i-1;k++)
                    {
                        sum+=a[k];
                    }
                }
                y=max (y , sum);
                z=min(z , sum);
            }
            x=max (x , y-z);
        }
        cout << x << "\n";
        for (int i=1;i<=t;i++)
        {
            a[i]=0;
        }
    }
    return 0;
}