#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("friends.in","r",stdin);
    freopen("friends.out","w",stdout);
    int n,a[100010],sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        int z;
        priority_queue<int,vector<int>,greater<int> > q;
        for(int j=1;j<=i;j++)
        {
            q.push(a[j]); 
        }
        for(int j=i+1;j<=n;j++)
        {
            int b=q.top();
            q.pop();
            q.push(b+a[j]); 
        }
        z=q.top();
        q.pop();
        for(int j=2;j<=i;j++)
        {
            int b=q.top();
            z=__gcd(z,b);
            q.pop();
        }
        cout<<z<<" "; 
    }
    return 0;
} 
