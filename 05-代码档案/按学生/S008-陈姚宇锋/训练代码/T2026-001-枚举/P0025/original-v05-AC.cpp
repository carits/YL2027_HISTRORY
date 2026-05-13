#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n,k;
    cin>>n>>k;
    int sum=0; 
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