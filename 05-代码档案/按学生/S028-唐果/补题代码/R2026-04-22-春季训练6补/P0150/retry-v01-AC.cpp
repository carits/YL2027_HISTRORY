#include <bits/stdc++.h>
using namespace std;
#define int long long 
int T,n,a[200005],nbn;
signed main()
{
    cin >> T;
    while(T--)
    {
        cin >> n;
        bool f=0;
        nbn=0;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            nbn+=a[i];
        } 
        if(nbn%n!=0)
        {
            cout << -1 << endl;
            continue;
        }
        int sum=nbn/n;
        int ct=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>sum) ct++;
        }
        cout << ct << endl;
    }  
    return 0;
}