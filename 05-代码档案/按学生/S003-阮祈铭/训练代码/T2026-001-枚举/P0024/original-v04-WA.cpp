#include<bits/stdc++.h>
using namespace std;
int n,i,k,s;
int main()
{
    cin>>n>>k;
    if(5*(n+1)*n/2>=240-k)
        cout<<n;
    for(i=1;i<=n;i++)
    {
        s+=i;
        if((240-k)/5<s)
        {
            cout<<i-1;
            return 0;
        }
        if((240-k)/5==s)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}