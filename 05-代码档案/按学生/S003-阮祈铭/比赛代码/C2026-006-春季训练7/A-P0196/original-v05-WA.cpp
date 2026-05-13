#include<bits/stdc++.h>
using namespace std;
int t,n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            cout<<i<<' ';
            for(int j=1;j<=n;j++)
            {
                if(j!=i)
                {
                    cout<<j<<' ';
                }
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            cout<<i<<' '; 
        }
        cout<<endl;
    }
    return 0;
}