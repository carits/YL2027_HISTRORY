#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

int t, n, a[N];

void solve()
{
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i]; 
    }
    
    if(sum % n != 0)
    {
        cout << -1 << "\n";
        return ;
    }
    
    int cnt = 0;
    sum /= n;
    
    for(int i = 1; i <= n; i++)
    {
        if(a[i] > sum)
        {
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    
    return ; 
}

int main()
{
    cin >> t;//
    
    while(t--)
    {
        solve();
    }    
    return 0;
} 