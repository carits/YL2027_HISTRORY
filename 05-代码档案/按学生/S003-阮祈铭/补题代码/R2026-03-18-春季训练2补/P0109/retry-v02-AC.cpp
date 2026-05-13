#include<bits/stdc++.h>
using namespace std;
long long t,n,ans;
bool Check(long long k,int p,long long n)
{
    for(int i=0;i<p;i++){
        if(n%k!=1){
            return false;
        }
        n/=k;
    }
    return n==1;
}

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
            for(int k=max(2,x-5);k<=x+5 && f;k++)
            {
                if(Check(k,p,n))
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