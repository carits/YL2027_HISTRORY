#include<bits/stdc++.h>
using namespace std;
int t,n,a[1010];
int main()
{
    cin>>t;
    while(t--)
    {
        bool ct=true,c1=false;
        string ans="";
        int cnt=0;
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
                    cnt++;
                    f=false;
                    if(a[i]<a[1])
                    {
                        a[1]=ceil(1.0*a[1]/a[i]);
                        ans+="1 "+to_string(i)+"\n"; 
                    }
                    else
                    {
                        a[i]=ceil(1.0*a[i]/a[1]);
                        ans+=to_string(i)+" 1\n";
                    }
                }
            }
            if(f)
            {
                break;
            }
        }
        cout<<cnt<<endl<<ans;
    }
    return 0;
}