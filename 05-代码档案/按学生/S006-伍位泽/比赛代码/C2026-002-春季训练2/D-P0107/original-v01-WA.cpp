#include <bits/stdc++.h>
using namespace std;
int y[200005];
int main ( )
{
    int t , n , d , h;
    cin >> t;
    while (t--)
    {
        cin >> n >> d >> h;
        for (int i=1;i<=n;i++)
        {
            cin >> y[i];
        }
        double sum=d*h/2.0;
        for (int i=n-1;i>=1;i--)
        {
            if (y[i]+h>y[i+1])
            {
                int l=y[i+1]-y[i];
                sum+=((d*((h-l)*1.0/h))+d)*l/2.0;
            }
            else
            {
                sum+=d*h/2.0;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}