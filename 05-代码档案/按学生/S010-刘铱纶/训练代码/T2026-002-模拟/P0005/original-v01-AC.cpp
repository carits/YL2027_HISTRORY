#include<bits/stdc++.h>
using namespace std;
int n,m;
struct Node
{
    int c;
    string s;
}a[100005];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i].c>>a[i].s;
    int x,y,i=1;
    while(m--)
    {
        cin>>x>>y;
        if(x==0)
        {
            if(a[i].c==0)
                i-=y;
            else
                i+=y;
        }
        else
        {
            if(a[i].c==0)
                i+=y;
            else
                i-=y;
        }
        while(i<1)
            i+=n;
        while(i>n)
            i-=n;
    }
    cout<<a[i].s;
    return 0;
}