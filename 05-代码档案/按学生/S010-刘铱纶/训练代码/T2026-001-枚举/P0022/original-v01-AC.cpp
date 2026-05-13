#include<bits/stdc++.h>
using namespace std;
int k,n,w;
int main()
{
    cin>>k>>n>>w;
    long long sum=0;
    for(int i=1;i<=w;i++)
        sum+=i*k;
    if(sum<=n)
        cout<<0;
    else
        cout<<sum-n;
    return 0;
}