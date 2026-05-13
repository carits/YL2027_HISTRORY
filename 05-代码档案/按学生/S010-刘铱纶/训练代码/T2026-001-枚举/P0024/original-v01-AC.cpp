#include<bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    cin>>n>>k;
    int sum=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(sum+i*5+k<=240)
        {
            sum+=i*5;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}