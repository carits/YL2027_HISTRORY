#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n,box[200005],res[200005],minn=200005,a[200005];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);    
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        } 
        for(int i=2;i<=n;i++)
        {
            cout << a[i] << " ";
        }
        cout << a[1] << "\n";
    }
    return 0;
}