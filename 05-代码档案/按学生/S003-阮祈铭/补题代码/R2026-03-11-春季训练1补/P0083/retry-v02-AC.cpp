#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[32][32];
void c()
{
    a[0][0]=1;
    for(int i=1;i<32;i++)
    {
        a[i][0]=1;
        //cout<<"\n"<<a[i][0];
        for(int j=1;j<32;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            //cout<<" "<<a[i][j];
        }
    }
}
ll lg(int n)
{
    int cnt=0;
    while(n > 1)
    {
        n/=2;
        cnt++;
    }
    return cnt;
}
int main()
{
    c();
    ll t,n,k,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>k;
        n=lg(n);
        for(int l=1;l<=n;l++)
        {
            for(int o=1;o<=l && l+o-1<=k;o++)
            {
                //cout<<a[l-1][o-1]<<" l="<<l<<" o="<<o<<endl;
                ans+=a[l-1][o-1];
            }
        }
        if(n+1<=k)
        {
            ans+=a[n][0];
        }
        cout<<(int)pow(2,n)-ans<<endl;
    }
    return 0;
}