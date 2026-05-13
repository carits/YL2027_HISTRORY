#include<bits/stdc++.h>
using namespace std;
int x;
int minDigit(int n)
{
    int minn=INT_MAX;
    while(n!=0)
    {
        minn=min(minn,n%10);
        n/=10;
    }
    return minn;
}
int maxDigit(int n)
{
    int maxn=INT_MAX;
    while(n!=0)
    {
        maxn=max(maxn,n%10);
        n/=10;
    }
    return maxn;
}
int a(int n)
{
    if(n==1)
        return x;
    else
        return a(n-1)+minDigit(a(n-1))*minDigit(a(n-1));
}
int main()
{
    int i,n,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>n;
        cout<<a(n)<<endl;;
    }
    return 0;
}