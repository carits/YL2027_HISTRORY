#include <bits/stdc++.h>
using namespace std;
string x , y;
int main ( )
{
    int n;
    cin >> n >> x >> y;
    for (int i=0;i<=n-1;i++)
    {
        if (x[i]<y[i])
        {
            cout << "-1";
            return 0;
        }
        
    }
    for (int i=0;i<=n-1;i++)
    {
        cout << y[i];
    }
    return 0;
}