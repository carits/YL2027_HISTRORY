#include<bits/stdc++.h>
using namespace std;
int a[15],k,n=10;
int main()
{
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>k;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(30+k>=a[i])
            cnt++;
    } 
    cout<<cnt;
    return 0;
}