#include<bits/stdc++.h>
using namespace std;
int n,i,k,s;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        s+=i;
        if((240-k)/5>s)
        {
            cout<<s-1;
            return 0;
        }
        if((240-k)/5==s)
        {
            cout<<s;
            return 0;
        }
    }
    return 0;
}