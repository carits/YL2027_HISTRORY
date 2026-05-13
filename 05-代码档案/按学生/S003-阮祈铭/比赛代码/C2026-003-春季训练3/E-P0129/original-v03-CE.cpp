#include<bits/stdc++.h>
using namespace std;
long long n,a[100010];
map<long long,int> mp;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(f)
    {
        cout<<1<<endl<<a[1]<<endl;
        return 0;
    }
    bool f=true;
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=a[i-1])
        {
            f=false;
            break;
        }
    }
    sort(a+1,a+n+1);
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(n==2)
    {
        if((a[2]-a[1])%2==0)
        {
            cout<<3<<endl<<a[1]-a[2]+a[1]<<' '<<a[1]+(a[2]-a[1])/2<<' '<<a[2]+a[2]-a[1]<<endl;
        }
        else
        {
            cout<<2<<endl<<a[1]-a[2]+a[1]<<' '<<a[2]+a[1]-a[2]<<endl;
        }
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        mp[a[i+1]-a[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<2<<endl<<a[1]-a[2]+a[1]<<' '<<a[n]+a[2]-a[1];
    }
    else if(mp.size()==2)
    {
        auto x=(*mp.begin()); auto z=mp.end(); z--; auto y=(*z);
        if(x.second==1 && y.second!=1 && x.first==2*(y.first))
        {
            for(int i=1;i<n;i++)
            {
                if(a[i+1]-a[i]==x.first)
                {
                    cout<<1<<endl<<a[i]+y.first<<endl;
                    return 0;
                }
            }
        }
        else if(y.second==1 && x.second!=1 && y.first==2*(x.first))
        {
            for(int i=1;i<n;i++)
            {
                if(a[i+1]-a[i]==y.first)
                {
                    cout<<1<<endl<<a[i]+x.first<<endl;
                    return 0;
                }
            }
        }
        else if(x.second==1 && y.second==1 && (x.first==2*(y.first) || y.first==2*(x.first)))
        {
            if(a[2]-a[1]==max(x.first,y.first))
            {
                cout<<1<<endl<<a[1]+min(x.first,y.first)<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl<<a[2]+min(x.first,y.first)<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
            return 0;
        }
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}