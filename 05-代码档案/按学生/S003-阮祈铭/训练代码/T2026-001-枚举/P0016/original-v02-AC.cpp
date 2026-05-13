#include<bits/stdc++.h>
using namespace std;
int n,i,cnt;
int main()
{
    cin>>n;
    for(i=100;i<=999;i++)
    {
        if(i%10+(i/10)%10+i/100==n)
            cnt++;
    }
    cout<<cnt;
    return 0;
} 