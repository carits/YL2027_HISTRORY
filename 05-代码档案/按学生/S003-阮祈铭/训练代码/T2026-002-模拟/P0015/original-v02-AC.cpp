#include<bits/stdc++.h>
using namespace std;
queue<int> que;
int n,s,m,i;
int main()
{
    cin>>n>>s>>m;
    for(i=1;i<=n;i++)
        que.push(i);
    while(que.front()<=s-1)
    {
        que.push(que.front());
        que.pop();
    }
    i=1;
    while(!que.empty())
    {
        if(i==m)
        {
            i=1;
            cout<<que.front()<<' ';
        }
        else
        { 
            i++;
            que.push(que.front());
        }
        que.pop();
    }
    return 0;
}