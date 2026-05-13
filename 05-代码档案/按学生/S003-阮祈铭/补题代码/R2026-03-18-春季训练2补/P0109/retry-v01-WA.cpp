#include<bits/stdc++.h>
using namespace std;
long long t,n,ans;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool f=true;
        for(int p=2;p<=63 && f;p++)
        {
            int x=pow(n,1.0/p);
            for(int k=x-5;k<=x+5 && f;k++)
            {
                if((pow(k,p+1)-1)/(double)(k-1) == n && k>0)
                {
                    f=false;
                    cout<<"YES\n";
                }
            }
        }
        if(f)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}