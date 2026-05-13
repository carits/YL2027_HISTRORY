#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,k;
    cin>>n>>k;
    if(n%10==k)
    {
        cout<<1;
        return 0;
    } 
    n%=10;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    int sum=1; 
    while(1)
    {
        sum++;
        int a=n*sum;
        if(a%10==k || a%10==0)
        {
            cout<<sum<<endl;
            return 0; 
        }
    }
    return 0;
}