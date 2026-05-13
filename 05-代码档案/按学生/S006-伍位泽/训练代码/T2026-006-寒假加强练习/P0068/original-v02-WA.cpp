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
            if (i%k==0)
            {
                sum=s-sum;
            }
            if (sum<0)
            {
                sum=0;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}