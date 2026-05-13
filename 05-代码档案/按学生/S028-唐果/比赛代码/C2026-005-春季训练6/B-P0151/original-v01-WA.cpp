#include <bits/stdc++.h>
using namespace std;
int n,a[200005],maxn,id,cnt;
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    id=a[1];
    cnt=1;
    maxn=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<=id*2)
        {
            cnt++;
            id=a[i];
        }
        else
        {
            maxn=max(maxn,cnt);
            id=a[i];
            cnt=1;
        }
    }
    cout << maxn;
    return 0;
}