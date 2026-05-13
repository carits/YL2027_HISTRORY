#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
signed main()
{
    for(int i=1;i<=10;++i)
    {
        cin>>a[i]; 
    }
    int x;
    cin>>x;
    int sum=0;
    for(int i=1;i<=10;++i)
    {
        if(a[i]<=x+30)
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}