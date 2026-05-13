#include<bits/stdc++.h>
using namespace std;
const int kMaxN=2e5+10;
int t,n;
int a[kMaxN];
map<int,int> cnt_10;
int main()
{
    cin >> t;
    while(t--)
    {
        cnt_10.clear();
        bool f = true,ft = true;
        int cnt10 = 0;
        cin >> n;
        for(int i=1;i<=n;i++) 
        {
            cin >> a[i];
            if(a[i] % 10 == 5)
            {
                a[i]+=5;
            }
            if(a[i] %10 == 0)
            {
                cnt10 ++;
                cnt_10[a[i]] ++;
            }
            if(i > 1 && a[i] != a[1])
            {
                ft=false;
            }
        }
        if(ft)
        {
            cout<<"Yes\n";
            continue;
        }
        if(cnt_10.size() > 1 || (cnt10 < n && cnt10>0))
        {
            cout<<"No\n";
            continue;
        }
        for(int i = 1; i <= n; i ++)
        {
            while(a[i] % 10 != 2)
            {
                a[i] += (a[i]%10);
            }
            a[i] /= 10;
        }
        for(int i=2;i<=n;i++)
        {
            if(a[i]%2 != a[1]%2)
            {
                f=false;
                break;
            }
        }
        if(f)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}