#include <bits/stdc++.h>
using namespace std;
int y[200005];
int main ( )
{
    int t , n;
    double d , h;
    cin >> t;
    while (t--)
    {
        cin >> n >> d >> h;
        for (int i=1;i<=n;i++)
        {
            cin >> y[i];
        }
        double sum=d*h/2;
        for (int i=n-1;i>=1;i--)
        {
            if (y[i]+h>y[i+1])
            {
                double l=y[i+1]-y[i];
                sum+=((d*((h-l)*1/h))+d)*l/2;
            }
            else
            {
                sum+=d*h/2;
            }
        }
        printf ("%.7lf\n" , sum);
    }
    return 0;
}