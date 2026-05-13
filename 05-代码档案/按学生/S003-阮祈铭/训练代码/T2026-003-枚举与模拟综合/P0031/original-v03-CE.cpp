#include<bits/stdc++.h>
using namespace std;
long long x;
long long minDigit(int n)
{
    long long minn=INT_MAX;
    while(n!=0)
    {
        minn=min(minn,n%10);
        n/=10;
    }
    return minn;
}
long long maxDigit(int n)
{
    long long maxn=INT_MIN;
    while(n!=0)
    {
        maxn=max(maxn,n%10);
        n/=10;
    }
    return maxn;
}
long long a(int n)
{
    if(n==1)
        return x;
    else
        return a(n-1)+minDigit(a(n-1))*minDigit(a(n-1));
}
int main()
{
    long long i,n,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>n;
        cout<<a(n)<<endl;;
    }
    return 0;
}