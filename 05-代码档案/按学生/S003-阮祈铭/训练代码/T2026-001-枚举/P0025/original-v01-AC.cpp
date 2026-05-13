#include<bits/stdc++.h>
using namespace std;
long long k,r,i;
int main()
{
    cin>>k>>r;
    for(i=1;i<=10;i++)
    {
        if(i*k%10==0||i*k%10==r)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}