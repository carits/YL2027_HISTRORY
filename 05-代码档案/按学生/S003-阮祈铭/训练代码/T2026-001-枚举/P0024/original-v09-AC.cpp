#include<bits/stdc++.h>
using namespace std;
long long n,i,k,s;
int main()
{
    cin>>n>>k; 
    for(i=1;i<=n;i++)
    {
        s+=i*5;
        if(240-k<s)
        {
            cout<<i-1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}