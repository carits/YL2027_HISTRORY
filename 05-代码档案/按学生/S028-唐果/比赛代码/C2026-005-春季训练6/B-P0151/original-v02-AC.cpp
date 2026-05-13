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
    cnt=1;
    maxn=0;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<=a[i-1]*2)
        {
            cnt++;
        }
        else
        {
            maxn=max(maxn,cnt);
            cnt=1;
        }
    }
    maxn=max(maxn,cnt);
    cout << maxn;
    
    return 0;
}