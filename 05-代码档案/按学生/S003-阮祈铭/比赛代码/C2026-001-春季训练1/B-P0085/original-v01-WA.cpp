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
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                cnt++;
            }
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}