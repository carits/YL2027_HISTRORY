#include <bits/stdc++.h>
using namespace std;
int n;
bool sf (int p)
{
    int cnt=0;
    int q=p;
    while (q!=0)
    {
        cnt++;
        q/=10;
    }
    long long pos= (long long) (cnt-1)*p;
    if (pos+1>=n) return 1;
    return 0;
}
int main ( )
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int l=1 , r=2e9;
    while (l<r)
    {
        int mid=l/2+r/2;
        if (sf (mid)==1)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << l;
    return 0;
}