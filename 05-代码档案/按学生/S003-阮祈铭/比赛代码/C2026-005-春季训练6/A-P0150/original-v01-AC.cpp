#include<bits/stdc++.h>
using namespace std;
long long t,n,a[200010],sum,cnt;
int main()
{
    cin>>t;
    while(t--)
    {
        sum=0;
        cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]>sum/n)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}