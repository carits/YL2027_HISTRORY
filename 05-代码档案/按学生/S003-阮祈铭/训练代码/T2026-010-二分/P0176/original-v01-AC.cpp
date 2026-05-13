#include<bits/stdc++.h>
using namespace std;
long long n,l=0,r=100001,mid;
int main()
{
    cin>>n;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(mid*mid*mid>n)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    cout<<l<<endl;
    return 0;
}