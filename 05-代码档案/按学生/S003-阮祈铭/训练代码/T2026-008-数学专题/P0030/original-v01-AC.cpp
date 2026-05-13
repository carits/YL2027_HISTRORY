#include<bits/stdc++.h>
using namespace std;
const int kMaxN=100010;
long long a[kMaxN];
int main()
{
    int t,n,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
     	for(int i=1;i<n;i++)
        {
            for(int sum=a[i];sum<=n+i;sum+=a[i])
            {
                if(a[i]*a[sum-i]==sum&&i<(sum-i))
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}