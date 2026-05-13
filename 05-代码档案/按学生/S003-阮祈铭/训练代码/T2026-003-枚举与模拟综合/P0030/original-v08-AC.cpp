#include<bits/stdc++.h>

using namespace std;

const int kMaxN=100010;

long long a[kMaxN];

int main()
{
    int t,n,cnt;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cnt=0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
        }

        for(int j=1;j<n;j++)
        {
            for(int sum=a[j];sum<=n+j;sum+=a[j])
            {
                if(j<(sum-j)&&a[j]*a[sum-j]==sum)
                    cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}