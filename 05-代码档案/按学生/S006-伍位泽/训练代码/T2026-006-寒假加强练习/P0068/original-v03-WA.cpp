#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int t , s , k , m;
    cin >> t;
    while (t--)
    {
        int sum=s;
        cin >> s >> k >> m;
        for (int i=1;i<=m;i++)
        {
            sum--;
            if (sum<0)
            {
                sum=0;
            }
            if (i%k==0)
            {
                sum=s-sum;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}