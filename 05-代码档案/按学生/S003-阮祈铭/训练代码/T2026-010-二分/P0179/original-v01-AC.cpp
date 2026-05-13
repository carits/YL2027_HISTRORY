#include<bits/stdc++.h>
using namespace std;
int n,x,ans,cnt1,cnt2,f1,f2;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
        {
            if(f1==0)
            {
                ans=max(ans,min(cnt1,cnt2)*2);
                f1=1;
                f2=0;
                cnt1=0;
            }
            cnt1++;
        }
        else
        {
            if(f2==0)
            {
                ans=max(ans,min(cnt1,cnt2)*2);
                f2=1;
                f1=0;
                cnt2=0;
            }
            cnt2++;
        }
    }
    ans=max(ans,min(cnt1,cnt2)*2);
    cout<<ans<<endl;
    return 0;
}