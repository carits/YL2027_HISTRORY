#include <bits/stdc++.h>
using namespace std;
bool rn (int n)
{
    if (n%400==0||(n%4==0&&n%100!=0))
    {
        return 1;
    }
    return 0;
}
int main ( )
{
    int x , y;
    cin >> x >> y;
    int cnt=0;
    for (int i=x;i<=y;i++)
    {
        if (rn (i)==1)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
    for (int i=x;i<=y;i++)
    {
        if (rn (i)==1)
        {
            cout << i << " ";
        }
    }
    return 0;
}