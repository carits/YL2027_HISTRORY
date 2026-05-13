#include<bits/stdc++.h>
using namespace std;
int t,n,x,tmp;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)//
        {
            cin>>x;
            if(i>1)
            {
                cout<<x<<' ';
            }
            else
            {
                tmp=x;
            }
        }
        cout<<tmp<<endl;
    }
    return 0;
}