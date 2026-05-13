#include<bits/stdc++.h>
using namespace std;
int a[1000000],vis[1000000];
int n,cnt=0;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for(int i = 1; i <= n; i++)
        {
            if(i==n)
            {
                cout<<a[1]<<" ";
            }
            else cout<<a[i+1]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}