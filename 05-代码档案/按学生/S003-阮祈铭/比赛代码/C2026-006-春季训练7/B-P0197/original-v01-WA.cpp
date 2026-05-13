#include<bits/stdc++.h>
using namespace std;
int t,n,x;
stack<int> stk;
int main()
{
    cin>>t;
    while(t--)
    {
        while(!stk.empty())
        {
            stk.pop();
        }
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            stk.push(x);
        }
        for(int i=1;i<=n;i++)
        {
            cout<<stk.top()<<' ';
            stk.pop();
        }
        cout<<endl;
    }
    return 0;
}