#include<bits/stdc++.h>
using namespace std;
int k,r;
int main()
{
    cin>>k>>r;
    //(k-r)%10==0
    int cnt=10;
    for(int i=1;i<=9;i++)
    {
        if((k*i-r)%10==0||(k*i)%10==0)
           cnt=min(cnt,i);
    }
    cout<<cnt;
    return 0;
}