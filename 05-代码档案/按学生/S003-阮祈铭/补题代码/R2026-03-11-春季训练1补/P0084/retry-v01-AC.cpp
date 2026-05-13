#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int t,n,cnt,maxn;
    cin>>t;
    while(t--)
    {
        cnt=0;
        maxn=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            maxn=max(maxn,a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==maxn)
            {
                cnt++;
            }
        }
        cout<<cnt<< endl;
    }
    return 0;
}