#include<bits/stdc++.h>
using namespace std;
int t,n,a[1010];
int main()
{
    cin>>t;
    while(t--)
    {
        bool ct=true,c1=false;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i>1 && a[i]!=a[i-1])
            {
                ct=false;
            }
            if(a[i]==1)
            {
                c1=true;
            }
        }
        if(ct)
        {
            cout<<0<<endl;
            continue;
        }
        if(c1)
        {
            cout<<-1<<endl;
            continue;
        }
        while(true)
        {
            bool f=true;
            for(int i=2;i<=n;i++)
            {
                if(a[i]!=a[1])
                {
                    f=false;
                    if(a[i]<a[1])
                    {
                        a[1]=ceil(1.0*a[1]/a[i]);
                        cout<<1<<' '<<i<<endl;
                    }
                    else
                    {
                        a[i]=ceil(1.0*a[i]/a[1]);
                        cout<<i<<' '<<1<<endl;
                    }
                }
            }
            if(f)
            {
                break;
            }
        }
    }
    return 0;
}