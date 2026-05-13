#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,x,y,a[200010],minn,b[200010],j;

void coutque(queue<int> &que)
{
    while(!que.empty())
    {
        cout<<que.front()<<' ';
        que.pop();
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        queue<int> que;
        minn=INT_MAX;
        j=0;
        bool f=true;
        cin>>n>>x>>y;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=x;i++)
        {
            j++;
            b[j]=a[i];
        }
        for(int i=x+1;i<=y;i++)
        {
            minn=min(minn,a[i]);
            que.push(a[i]);
        }
        for(int i=y+1;i<=n;i++)
        {
            j++;
            b[j]=a[i];
        }
        while(que.front()!=minn)
        {
            que.push(que.front());
            que.pop();
        }
        for(int i=1;i<=j;i++)
        {
            if(f && que.front()<b[i])
            {
                f=false;
                coutque(que);
            }
            cout<<b[i]<<' ';
        }
        if(f)
        {
            coutque(que);
        }
        cout<<endl;
    }
    return 0;
}