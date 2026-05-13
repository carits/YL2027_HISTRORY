#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n;
char a[100005],b[100005];
signed main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin >> b[i];
        }
        int sum=0;
        bool ff=0,f=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]=='1'&&b[i]=='0')
            {
                sum+=2;
                if(f) sum+=1;
                ff=0;
                f=0;
            }
            if(a[i]=='0'&&b[i]=='1')
            {
                sum+=2;
                if(f) sum+=1;
                ff=0; 
                f=0;  
            } 
            if(a[i]=='1'&&b[i]=='1')
            {
                if(f==1)
                {
                    sum+=2;
                    f=0;
                }
                else ff=1;
            }
            if(f==1)
            {
                sum+=1;
                f=0;
            }
            if(a[i]=='0'&&b[i]=='0')
            {
                if(ff)
                {
                    sum+=2;
                    ff=0;
                }
                else
                {
                    f=1;
                }
            }
        }
        if(f==1)
        {
            sum+=1;
        }        
        cout << sum << endl;              
    }
    return 0;
}